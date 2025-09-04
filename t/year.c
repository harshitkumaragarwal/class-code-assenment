#include <stdio.h>

int main() {
    int year, difference, leap_year_in_between, add, day;

    printf("Enter year: ");
    scanf("%d", &year);

    difference = year - 2001;
    leap_year_in_between = difference / 4;

    add = difference + leap_year_in_between;

    day = add % 7;

    if (day == 0)
        printf("Monday");
    else if (day == 1)
        printf("Tuesday");
    else if (day == 2)
        printf("Wednesday");
    else if (day == 3)
        printf("Thursday");
    else if (day == 4)
        printf("Friday");
    else if (day == 5)
        printf("Saturday");
    else if (day == 6)
        printf("Sunday");

    return 0;
}
