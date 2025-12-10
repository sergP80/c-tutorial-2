#pragma once

typedef struct tagStudent
{
    char name[256];
    long birth_date;
    char gender;
    short group_id;
    char group_name[30];
    double scoring;
} STUDENT, *PSTUDENT;

#define DATE_TIME_FORMAT "%d.%m.%Y"

void display(PSTUDENT);

void set_name(PSTUDENT, char*);

void set_birth_date(PSTUDENT, char*);

char* get_birth_date(PSTUDENT, char*, int);

void set_group_id(PSTUDENT, short);

void set_group_name(PSTUDENT, char*);

void set_gender(PSTUDENT, char);

void set_scoring(PSTUDENT, double);