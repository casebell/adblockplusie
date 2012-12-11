#ifndef _PLUGIN_ERROR_CODES_H_
#define _PLUGIN_ERROR_CODES_H_


// Plugin errors
#define PLUGIN_ERROR_OS_VERSION 1
 #define PLUGIN_ERROR_OS_VERSION_REG_OPEN_KEY 1
 #define PLUGIN_ERROR_OS_VERSION_REG_QUERY_VALUE 2

#define PLUGIN_ERROR_MAC_ID 2
 #define PLUGIN_ERROR_MAC_ID_RETRIEVAL 1
 #define PLUGIN_ERROR_MAC_ID_RETRIEVAL_EX 2

#define PLUGIN_ERROR_SESSION 3
 #define PLUGIN_ERROR_SESSION_GET_INTERNET_SESSION 1
 #define PLUGIN_ERROR_SESSION_CREATE_HTTP_INSTANCE 2
 #define PLUGIN_ERROR_SESSION_REGISTER_HTTP_NAMESPACE 3

#define PLUGIN_ERROR_UPDATER 4
 #define PLUGIN_ERROR_UPDATER_CREATE_PROCESS 1
 #define PLUGIN_ERROR_UPDATER_DOWNLOAD_FILE 2

#define PLUGIN_ERROR_THREAD 5
 #define PLUGIN_ERROR_MAIN_THREAD_CREATE_PROCESS 1
 #define PLUGIN_ERROR_TAB_THREAD_CREATE_PROCESS 2

#define PLUGIN_ERROR_GUID 6
 #define PLUGIN_ERROR_GUID_REG_OPEN_KEY 1
 #define PLUGIN_ERROR_GUID_REG_GET_SET 2

#define PLUGIN_ERROR_SYSINFO 7
 #define PLUGIN_ERROR_SYSINFO_USER_NAME 1
 #define PLUGIN_ERROR_SYSINFO_COMPUTER_NAME 2
 #define PLUGIN_ERROR_SYSINFO_BROWSER_LANGUAGE 3
 #define PLUGIN_ERROR_SYSINFO_TEMP_PATH 4
 #define PLUGIN_ERROR_SYSINFO_TEMP_FILE 5
 #define PLUGIN_ERROR_SYSINFO_GET_SPECIAL_FOLDER_LOCAL 6
 #define PLUGIN_ERROR_SYSINFO_GET_SPECIAL_FOLDER 7
 #define PLUGIN_ERROR_SYSINFO_GET_SPECIAL_FOLDER_PROGRAM_FILES 8
 #define PLUGIN_ERROR_SYSINFO_GET_SPECIAL_FOLDER_COMMON_FILES 9
 #define PLUGIN_ERROR_SYSINFO_GET_SPECIAL_FOLDER_TEMP 10

#define PLUGIN_ERROR_SETTINGS 8
 // 1 + 2 reserved
 #define PLUGIN_ERROR_SETTINGS_CREATE_FOLDER 3
 #define PLUGIN_ERROR_SETTINGS_FILE_READ 4
 #define PLUGIN_ERROR_SETTINGS_FILE_WRITE 5
 #define PLUGIN_ERROR_SETTINGS_FILE_READ_CHECKSUM 6
 #define PLUGIN_ERROR_SETTINGS_CREATE_MUTEX 7
 #define PLUGIN_ERROR_SETTINGS_RELEASE_MUTEX 8
 #define PLUGIN_ERROR_SETTINGS_CREATE_MAPFILE 9
 #define PLUGIN_ERROR_SETTINGS_RELEASE_MAPFILE 10
 #define PLUGIN_ERROR_SETTINGS_CREATE_MAPFILE_VIEW 11
 #define PLUGIN_ERROR_SETTINGS_RELEASE_MAPFILE_VIEW 12

#define PLUGIN_ERROR_FILTER 9
 #define PLUGIN_ERROR_FILTER_CREATE_FILE_OPEN 1
 #define PLUGIN_ERROR_FILTER_DOWNLOAD_FILE 2
 #define PLUGIN_ERROR_FILTER_READ_FILE 3
 #define PLUGIN_ERROR_FILTER_MOVE_FILE 4
 #define PLUGIN_ERROR_FILTER_CREATE_FILE_WRITE 5
 #define PLUGIN_ERROR_FILTER_CREATE_FILE_CLOSE 6
 #define PLUGIN_ERROR_FILTER_COPY_FILE 7

#define PLUGIN_ERROR_NAVIGATION 10
 #define PLUGIN_ERROR_NAVIGATION_WELCOME 1
 #define PLUGIN_ERROR_NAVIGATION_INFO 2
 #define PLUGIN_ERROR_NAVIGATION_ACTIVATE 3
 #define PLUGIN_ERROR_NAVIGATION_FAQ 4
 #define PLUGIN_ERROR_NAVIGATION_ABOUT 5
 #define PLUGIN_ERROR_NAVIGATION_FEEDBACK 6
 #define PLUGIN_ERROR_NAVIGATION_SETTINGS 7
 #define PLUGIN_ERROR_NAVIGATION_INVITATION 8
 #define PLUGIN_ERROR_NAVIGATION_ENTERLICENSE 9
 #define PLUGIN_ERROR_NAVIGATION_UPGRADE 10
 #define PLUGIN_ERROR_NAVIGATION_ENABLE_CONVERSSION 801


#define PLUGIN_ERROR_DICTIONARY 11
 #define PLUGIN_ERROR_DICTIONARY_DOWNLOAD_FILE 1
 #define PLUGIN_ERROR_DICTIONARY_MOVE_FILE 2
 #define PLUGIN_ERROR_DICTIONARY_CREATE_FILE 3
 #define PLUGIN_ERROR_DICTIONARY_READ_FILE 4
 #define PLUGIN_ERROR_DICTIONARY_LOOKUP 5
 #define PLUGIN_ERROR_DICTIONARY_COPY_FILE 6

#define PLUGIN_ERROR_FTP_SEND 12
 #define PLUGIN_ERROR_FTP_SEND_GET_PROXY 1
 #define PLUGIN_ERROR_FTP_SEND_OPEN 2
 #define PLUGIN_ERROR_FTP_SEND_CONNECT 3
 #define PLUGIN_ERROR_FTP_SEND_PUT 4
 #define PLUGIN_ERROR_FTP_SEND_CLOSE 5

#define PLUGIN_ERROR_MUTEX 13
 #define PLUGIN_ERROR_MUTEX_CREATE 1
 #define PLUGIN_ERROR_MUTEX_RELEASE 2
 #define PLUGIN_ERROR_MUTEX_WAIT 3
 #define PLUGIN_ERROR_MUTEX_WAIT_TIMEOUT 4

 #define PLUGIN_ERROR_MUTEX_SELFTEST_FILE 10

 #define PLUGIN_ERROR_MUTEX_DICTIONARY_FILE 20

 #define PLUGIN_ERROR_MUTEX_FILTER_FILE 30

 #define PLUGIN_ERROR_MUTEX_SETTINGS_FILE 40

 #define PLUGIN_ERROR_MUTEX_DEBUG_FILE 50

 #define PLUGIN_ERROR_MUTEX_SETTINGS 60

 #define PLUGIN_ERROR_MUTEX_MAIN_TAB 70

 #define PLUGIN_ERROR_MUTEX_SETTINGS_FILE_TAB 80

 #define PLUGIN_ERROR_MUTEX_SETTINGS_FILE_WHITELIST 90
 
 #define PLUGIN_ERROR_MUTEX_CONFIG_FILE 95

#define PLUGIN_ERROR_HTTP_REQUEST 14
 #define PLUGIN_ERROR_HTTP_REQUEST_SEND 1
 #define PLUGIN_ERROR_HTTP_REQUEST_OPEN 2
 #define PLUGIN_ERROR_HTTP_REQUEST_CONNECT 3
 #define PLUGIN_ERROR_HTTP_REQUEST_OPEN_REQUEST 4
 #define PLUGIN_ERROR_HTTP_REQUEST_SEND_REQUEST 5
 #define PLUGIN_ERROR_HTTP_REQUEST_RECEIVE_RESPONSE 6
 #define PLUGIN_ERROR_HTTP_REQUEST_QUERY_HEADERS 7
 #define PLUGIN_ERROR_HTTP_REQUEST_INVALID_RESPONSE_SERVER 8
 #define PLUGIN_ERROR_HTTP_REQUEST_QUERY_DATA_AVAILABLE 9
 #define PLUGIN_ERROR_HTTP_REQUEST_READ_DATA 10
 #define PLUGIN_ERROR_HTTP_REQUEST_URL_ESCAPE 11
 #define PLUGIN_ERROR_HTTP_REQUEST_SET_OPTION 12
 #define PLUGIN_ERROR_HTTP_REQUEST_GET_URL_PROXY 13
 
#define PLUGIN_ERROR_HTTP 15
 #define PLUGIN_ERROR_HTTP_PROXY_SETTINGS 1
 #define PLUGIN_ERROR_HTTP_CLOSE_HANDLE 2

#define PLUGIN_ERROR_SET_SITE 16
 #define PLUGIN_ERROR_SET_SITE_ADVICE 1
 #define PLUGIN_ERROR_SET_SITE_UNADVICE 2
 #define PLUGIN_ERROR_SET_SITE_QUERY_BROWSER 3
 #define PLUGIN_ERROR_SET_SITE_QUERY_SERVICE_PROVIDER 4
 #define PLUGIN_ERROR_SET_SITE_COINIT 5
 #define PLUGIN_ERROR_SET_SITE_FIND_CONNECTION_POINT 6
 
#define PLUGIN_ERROR_UI 17
 #define PLUGIN_ERROR_UI_GET_UXTHEME 1
 #define PLUGIN_ERROR_UI_GET_UXTHEME_OPEN 2
 #define PLUGIN_ERROR_UI_GET_UXTHEME_DRAW_BACKGROUND 3
 #define PLUGIN_ERROR_UI_GET_UXTHEME_CLOSE 4
 #define PLUGIN_ERROR_UI_GET_BROWSER_WINDOW 5
 #define PLUGIN_ERROR_UI_CREATE_STATUSBAR_PANE 6
 #define PLUGIN_ERROR_UI_REGISTER_PANE_CLASS 7
 #define PLUGIN_ERROR_UI_NO_STATUSBAR_BROWSER 8
 #define PLUGIN_ERROR_UI_LOAD_ICON 9
 #define PLUGIN_ERROR_UI_NO_STATUSBAR_WIN 10
 #define PLUGIN_ERROR_UI_INVALIDATE_STATUSBAR 11
 #define PLUGIN_ERROR_UI_GET_STATUSBAR 12
 #define PLUGIN_ERROR_UI_PUT_STATUSBAR 13

#define PLUGIN_ERROR_SELFTEST 18
 #define PLUGIN_ERROR_SELFTEST_MOVE_FILE 1
 #define PLUGIN_ERROR_SELFTEST_COPY_FILE 2

#define PLUGIN_ERROR_SETTINGS_TAB 19
// Same error codes as PLUGIN_ERROR_SETTINGS

#define PLUGIN_ERROR_SETTINGS_WHITELIST 20
// Same error codes as PLUGIN_ERROR_SETTINGS

#define PLUGIN_ERROR_INSTALL 21
 #define PLUGIN_ERROR_INSTALL_GET_WINDOWS_PATH 1
 #define PLUGIN_ERROR_INSTALL_APPEND_PATH 2
 #define PLUGIN_ERROR_INSTALL_CREATE_INI_FILE 3

#define PLUGIN_ERROR_CONFIG 22
 #define PLUGIN_ERROR_CONFIG_DOWNLOAD_FILE 1
 #define PLUGIN_ERROR_CONFIG_MOVE_FILE 2
 #define PLUGIN_ERROR_CONFIG_CREATE_FILE 3
 #define PLUGIN_ERROR_CONFIG_READ_FILE 4
 #define PLUGIN_ERROR_CONFIG_COPY_FILE 6

#define PLUGIN_ERROR_DOWNLOAD 23
 #define PLUGIN_ERROR_DOWNLOAD_OPEN_SAVE_DIALOG 1
 #define PLUGIN_ERROR_DOWNLOAD_CREATE_PROCESS 2
 #define PLUGIN_ERROR_DOWNLOAD_FILE_DOWNLOAD 3
 #define PLUGIN_ERROR_DOWNLOAD_CREATE_CONVERSION_PROCESS 4

#define PLUGIN_ERROR_USER_SETTINGS 24
 #define PLUGIN_ERROR_USER_SETTINGS_PARSE_KEY_VALUE 1

#endif // _PLUGIN_ERROR_CODES_H_
