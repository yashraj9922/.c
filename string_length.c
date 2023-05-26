#include <stdio.h>
int main()
{
    int length = 0;
    char string[100];
    printf("Enter the string: \n");
    gets(string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of a entered string %d", length);
    return 0;
}