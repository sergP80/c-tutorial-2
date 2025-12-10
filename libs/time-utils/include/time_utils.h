#pragma once

#define DATE_TIME_FORMAT "%d.%m.%Y"

long date_to_timestamp(char* date);

char* timestamp_to_date(long timestamp, char* date, int size);
