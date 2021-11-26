//////////////////
//// timval.h ////
//////////////////
// (c) Luke Chemeriov time.GetCurrentDay() time.GetCurrentMonth(), time.GetCurrentYear();
// Output: (c) Luke Chemeriov 26 Nov, 2021
// lol //


// pre-processor doodads
#include <iostream>
#include <chrono>
#include <ctime>  
#include <string.h>
#include <time.h>
// Macro for accessing std::localtime pointer
// LC for Luke Chemeriov #shameless_self_plugs
#define LC_GET_LOCALTIME std::tm* now; 

// main time struct
struct time
{
    // constructor and destructor
    time()
    {
        std::time_t t = std::time(0);
        std::tm* now = std::localtime(&t);
    }
    ~time()
    {

    }

    // time functions
    int GetCurrentSecond()
    {
        LC_GET_LOCALTIME
        return now->tm_sec;
    }
    int GetCurrentMinute()
    {
        LC_GET_LOCALTIME
        return now->tm_min;
    }
    int GetCurrentPositionInMonth()
    {
        LC_GET_LOCALTIME
        return now->tm_mday;
    }
    int GetCurrentPositionInWeek()
    {
        LC_GET_LOCALTIME
        return now->tm_wday;
    }
    int GetCurrentPositionInYear()
    {
        LC_GET_LOCALTIME
        return now->tm_yday;
    }
    int GetCurrentMonth()
    {
        LC_GET_LOCALTIME
        return now->tm_mon;
    }
    int GetCurrentYear()
    {
        LC_GET_LOCALTIME
        return now->tm_year;
    }
    const char* GetCurrentTimeZone()
    {
        LC_GET_LOCALTIME
        return now->tm_zone;
    }
    int GetCurrentDST()
    {
        LC_GET_LOCALTIME
        return now->tm_isdst;
    }
    int GetCurrentSecondsPastUTC()
    {
        LC_GET_LOCALTIME
        return now->tm_gmtoff;
    }
};
