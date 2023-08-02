#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to be check ");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("The year is leap");
    }
    else
    {
        printf("This year is not leap");
    }
    return 0;
}