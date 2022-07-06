#include <stdio.h>
#include "Header.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{

    int num;
    printf("Enter your day: ");
    scanf_s("%i", &num);
    day_week(num);
    return 0;

}