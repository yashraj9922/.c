#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    printf("Enter the string\n");
    gets(str);

    printf("UPPERCASE of a string %s", strupr(str));
    printf("\nlowecase of a string %s", strlwr(str));
    return 0;
}