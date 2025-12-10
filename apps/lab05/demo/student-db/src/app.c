#include "app.h"

int main()
{
    STUDENT student = {
        "John Doe",
        date_to_timestamp("22.11.2003"),
        'M',
        105,
        "KI-105",
        4.78
    };

    display(&student);

    set_scoring(&student, 4.82);

    set_birth_date(&student, "21.10.2004");

    printf("Fixed data\n");

    display(&student);

    return 0;
}


