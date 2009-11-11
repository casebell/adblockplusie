#include "AdPluginStdAfx.h"

#include "AdPluginDebug.h"
#include "AdPluginMutex.h"
#include "AdPluginSettings.h"


class CPluginDebugLock : public CPluginMutex
{

private:

    static CComAutoCriticalSection s_criticalSectionDebugLock;

public:

    CPluginDebugLock() : CPluginMutex("DebugFile", PLUGIN_ERROR_MUTEX_DEBUG_FILE)
    {
        s_criticalSectionDebugLock.Lock();
    }

    ~CPluginDebugLock()
    {
        s_criticalSectionDebugLock.Unlock();
    }
};

CComAutoCriticalSection CPluginDebugLock::s_criticalSectionDebugLock;


#if (defined ENABLE_DEBUG_INFO)

void CPluginDebug::Debug(const CStringA& text, DWORD dwProcessId, DWORD dwThreadId)
{
    if (CPluginSettings::HasInstance())
    {
        CPluginSettings* settings = CPluginSettings::GetInstance();
        
        bool isWorkingThread = settings->IsWorkingThread(dwThreadId);

        CStringA processor;
        if (settings->IsMainProcess(dwProcessId) && settings->IsMainThread(dwThreadId))
        {
            processor = "main_thread";
        }
        else if (settings->IsMainProcess(dwProcessId) && !isWorkingThread)
        {
            processor = "main_ui";
        }
        else if (isWorkingThread)
        {
            processor = "tab" + settings->GetTabNumber() + "_thread";
        }
        else
        {
            processor = "tab" + settings->GetTabNumber() + "_ui";
        }

        SYSTEMTIME st;    
        ::GetSystemTime(&st);

        CStringA sysTime;
        sysTime.Format("%2.2d:%2.2d:%2.2d.%3.3d - ", st.wHour, st.wMinute, st.wSecond, st.wMilliseconds);

        CPluginDebugLock lock;
        if (lock.IsLocked())
        {
            std::ofstream debugFile;

            debugFile.open(CPluginSettings::GetDataPath("debug_" + processor + ".txt"), std::ios::app);

            int pos = 0;
            CStringA line = text.Tokenize("\n\r", pos);

            while (pos >= 0)
            {
                debugFile.write(sysTime.GetBuffer(), sysTime.GetLength());
                debugFile.write(line.GetBuffer(), line.GetLength());
                debugFile.write("\n", 1);
            
                line = text.Tokenize("\n\r", pos);
            }

            debugFile.flush();
        }
    }
}

void CPluginDebug::DebugClear()
{
    CPluginDebugLock lock;
    if (lock.IsLocked())
    {
        ::DeleteFileA(CPluginSettings::GetDataPath("debug_main_ui.txt"));
        ::DeleteFileA(CPluginSettings::GetDataPath("debug_main_thread.txt"));

        for (int i = 1; i <= 10; i++)
        {
            CStringA x;
            x.Format("%d", i);

            ::DeleteFileA(CPluginSettings::GetDataPath("debug_tab" + x + "_ui.txt"));
            ::DeleteFileA(CPluginSettings::GetDataPath("debug_tab" + x + "_thread.txt"));
        }
    }
}

#endif

#if (defined ENABLE_DEBUG_INFO || defined ENABLE_DEBUG_SELFTEST)

void CPluginDebug::DebugError(const CStringA& error)
{
#ifdef ENABLE_DEBUG_ERROR
    Debug(error);
#endif

    DEBUG_SELFTEST("********************************************************************************\n" + error + "\n********************************************************************************")
}

void CPluginDebug::DebugErrorCode(DWORD errorCode, const CStringA& error, DWORD dwProcessId, DWORD dwThreadId)
{
    CStringA errorCodeText;
    errorCodeText.Format("%u (0x%8.8x)", errorCode, errorCode);

    CStringA finalError = error + ". error=" + errorCodeText;

#ifdef ENABLE_DEBUG_ERROR
    Debug(finalError, dwProcessId, dwThreadId);
#endif

    DEBUG_SELFTEST("********************************************************************************\n" + finalError + "\n********************************************************************************")
}

#endif

// ============================================================================
// Debug result
// ============================================================================

#if (defined ENABLE_DEBUG_RESULT)

void CPluginDebug::DebugResult(const CStringA& text)
{
    SYSTEMTIME st;    
    ::GetSystemTime(&st);

    CStringA sysTime;
    sysTime.Format("%2.2d:%2.2d:%2.2d.%3.3d - ", st.wHour, st.wMinute, st.wSecond, st.wMilliseconds);

    CPluginDebugLock lock;
    if (lock.IsLocked())
    {
        std::ofstream debugFile;

        debugFile.open(CPluginSettings::GetDataPath("debug_result.txt"), std::ios::app);
        debugFile.write(sysTime.GetBuffer(), sysTime.GetLength());
        debugFile.write(LPCSTR(text), text.GetLength());
        debugFile.write("\n", 1);
        debugFile.flush();
    }
}

void CPluginDebug::DebugResultDomain(const CStringA& domain)
{
    DebugResult("===========================================================================================================================================================================================");
    DebugResult(domain);
    DebugResult("===========================================================================================================================================================================================");
}


void CPluginDebug::DebugResultBlocking(const CStringA& type, const CStringA& src, const CStringA& filter, const CStringA& filterFile)
{
    CStringA srcTrunc = src;
    if (srcTrunc.GetLength() > 100)
    {
        srcTrunc = src.Left(67) + "..." + src.Right(30);
    }
    
    CStringA blocking;
    blocking.Format("%-8s  %-100s  Blocked  %-20s - %s", type, srcTrunc, filterFile, filter);
    
    DebugResult(blocking);
}


void CPluginDebug::DebugResultHiding(const CStringA& tag, const CStringA& src, const CStringA& filter, const CStringA& filterFile)
{
    CStringA srcTrunc = src;
    if (srcTrunc.GetLength() > 100)
    {
        srcTrunc = src.Left(67) + "..." + src.Right(30);
    }

    CStringA blocking;
    blocking.Format("%-8s  %-100s  Hidden   %-20s - %s", tag, srcTrunc, filterFile, filter);
    
    DebugResult(blocking);
}


void CPluginDebug::DebugResultClear()
{
    CPluginDebugLock lock;
    if (lock.IsLocked())
    {
        ::DeleteFileA(CPluginSettings::GetDataPath("debug_result.txt"));
    }
}

#endif // ENABLE_DEBUG_RESULT


#if (defined ENABLE_DEBUG_RESULT_IGNORED)

void CPluginDebug::DebugResultIgnoring(const CStringA& type, const CStringA& src)
{
    CStringA srcTrunc = src;
    if (srcTrunc.GetLength() > 100)
    {
        srcTrunc = src.Left(67) + "..." + src.Right(30);
    }

    CStringA blocking;
    blocking.Format("%-8s  %-100s  Ignored", type, srcTrunc);
    
    DebugResult(blocking);
}

#endif // ENABLE_DEBUG_RESULT_IGNORED
