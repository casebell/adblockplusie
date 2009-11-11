#include "AdPluginStdAfx.h"

#include "AdPluginProfiler.h"


CPluginProfiler::CPluginProfiler() : m_dwAddTime(0)
{
    m_dwStartTime = ::GetTickCount();
    m_dwEndTime = m_dwStartTime;
}


CPluginProfiler::~CPluginProfiler()
{
}


void CPluginProfiler::StartTimer()
{
    m_dwStartTime = ::GetTickCount();
}


void CPluginProfiler::StopTimer()
{
    m_dwEndTime = ::GetTickCount();
}


DWORD CPluginProfiler::GetElapsedTime() const
{
    return m_dwEndTime - m_dwStartTime + m_dwAddTime;
}


CStringA CPluginProfiler::GetElapsedTimeString(DWORD addTime) const
{
    DWORD dwElapsedTime = m_dwEndTime - m_dwStartTime;
    DWORD dwElapsedTimeTotal = dwElapsedTime + addTime;

    CStringA sElapsedTime;

    if (addTime > 0)
    {
        sElapsedTime.Format("%2.2d:%2.2d.%3.3d (%2.2d:%2.2d.%3.3d)", 0, (dwElapsedTime / 1000) % 60, dwElapsedTime % 1000, 0, (dwElapsedTimeTotal / 1000) % 60, dwElapsedTimeTotal % 1000);
    }
    else
    {
        sElapsedTime.Format("%2.2d:%2.2d.%3.3d", 0, (dwElapsedTime / 1000) % 60, dwElapsedTime % 1000);
    }
        

    return sElapsedTime;
}
