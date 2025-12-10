#include "student.h"
#include "time-utils.h"
#include <stdio.h>
#include <string.h>

void display(PSTUDENT student)
{
    char date[30] = {0};

    timestamp_to_date(student->birth_date, date, sizeof(date));

    printf("{name=%s, "
           "birth_date=%s,"
           "group_id=%d,"
           "group_name=%s,"
           "scoring=%.2f"
           "}\n",
        student->name,
        date,
        student->group_id,
        student->group_name,
        student->scoring
        );
}

void set_name(PSTUDENT student, char* name)
{
    strcpy(student->name, name);
}

void set_birth_date(PSTUDENT student, char* birth_date)
{
    student->birth_date = date_to_timestamp(birth_date);
}

char* get_birth_date(PSTUDENT student, char* date, int size)
{
    return timestamp_to_date(student->birth_date, date, size);
}

void set_group_id(PSTUDENT student, short group_id)
{
    student->group_id = group_id;
}

void set_group_name(PSTUDENT student, char* group_name)
{
    strcpy(student->group_name, group_name);
}

void set_gender(PSTUDENT student, char gender)
{
    student->gender = gender;
}

void set_scoring(PSTUDENT student, double scoring)
{
    student->scoring = scoring;
}