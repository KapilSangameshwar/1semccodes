#include <stdio.h>
#include <conio.h>

int main()
{
    int a, year;

    printf("Enter the year: \n");
    scanf("%d", &year);

    printf("Enter the number of a month: \n");
    scanf("%d", &a);
    if (year % 4 == 0)
    {

        if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
        {
            printf("There are 31 days in this month");
        }
        else if (a == 4 || a == 6 || a == 9 || a == 11)
        {
            printf("The month has 30 days");
        }
        else if (a == 2)
        {
            printf("The month has 29 days");
        }
        else
        {
            printf("The number entered is not the number of a month");
        }
    }
    else
    {
        if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
        {
            printf("There are 31 days in this month");
        }
        else if (a == 4 || a == 6 || a == 9 || a == 11)
        {
            printf("The month has 30 days");
        }
        else if (a == 2)
        {
            printf("The month has 28 days");
        }
        else
        {
            printf("The number entered is not the number of a month");
        }
    }

    return 0;
}
