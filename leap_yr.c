#include <stdio.h>

int leap(int yr)
{
    if(yr % 400 == 0 || (yr % 4 == 0 && yr % 100 != 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not leap Year");
    }
}
int main()
{
    int year;
    printf("Enter the year ");
    scanf("%d", &year);

    leap(year);

    return 0;
}