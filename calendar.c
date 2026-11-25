
#include <stdio.h>
#include <time.h>

int main()
{
    int year, month, day;
    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    char *months[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    struct tm date = {0};

    printf("Enter year: ");
    scanf("%d", &year);

    if (year < 1)
    {
        printf("Invalid year!");
        return 1;
    }

    // Check for leap year
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        daysInMonth[1] = 29;
    }

    // Find the first day of the year
    date.tm_year = year - 1900;
    date.tm_mon = 0;
    date.tm_mday = 1;
    date.tm_isdst = -1;

    mktime(&date);

    int firstDay = date.tm_wday;

    // Print yearly calendar
    printf("\n          Calendar Year: %d\n", year);

    for (month = 0; month < 12; month++)
    {
        printf("\n\n       %s\n", months[month]);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (day = 0; day < firstDay; day++)
        {
            printf("    ");
        }

        for (day = 1; day <= daysInMonth[month]; day++)
        {
            printf("%3d ", day);

            if ((day + firstDay) % 7 == 0)
            {
                printf("\n");
            }
        }

        firstDay = (firstDay + daysInMonth[month]) % 7;
    }

    printf("\n");

    return 0;
}
