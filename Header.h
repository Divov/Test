#include <stdio.h>

int day_week(int num)
{
    if (num >= 1 && num <= 365)
    {
        switch (num % 7)
        {
        case 1:
            printf("Monday\n");
            return 1;
            break;
        case 2:
            printf("Tuesday\n");
            return 2;
            break;
        case 3:
            printf("Wedneday\n");
            return 3;
            break;
        case 4:
            printf("Thursday\n");
            return 4;
            break;
        case 5:
            printf("Friday\n");
            return 5;
            break;
        case 6:
            printf("Saturday\n");
            return 6;
            break;
        case 0:
            printf("Sunday\n");
            return 7;
            break;
        }
    }
    else {
        printf("Wrong enter\n");
        return 8;
    }
    return num;
}



