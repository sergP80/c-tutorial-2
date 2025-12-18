#include "time-utils.h"
#include <time.h>

#if defined(_MSC_VER)
#include <stdio.h>
#endif

long date_to_timestamp(char* date)
{
    struct tm tm = {0};

#if defined(_MSC_VER)
    int year, month, day;

    if (sscanf(date, "%d-%d-%d", &year, &month, &day) != 3)
        return -1;

    tm.tm_year = year - 1900;
    tm.tm_mon = month - 1;
    tm.tm_mday = day;

#else
    if (strptime(date, DATE_TIME_FORMAT, &tm) == NULL)
    {
        return -1;
    }
        
#endif
    
    tm.tm_hour = 0;
    tm.tm_min  = 0;
    tm.tm_sec  = 0;

    return mktime(&tm);
}

char* timestamp_to_date(long timestamp, char* date, int size)
{
    struct tm *tm = localtime(&timestamp);

    strftime(date, size, DATE_TIME_FORMAT, tm);

    return date;
}
