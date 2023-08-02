#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[10];
    printf("Enter the string ");
    gets(str);
    for (int i = 0; i < strlen(str); i = i + 2)
    {
        str[i] = toupper(str[i]);
    }
    printf("Alternative UPPERCASE\n%s", str);

    for (int i = 0; i < strlen(str); i = i + 2)
    {
        str[i] = tolower(str[i]);
    }
    printf("\n\nAlternative lowercase\n%s\n\n", str);

    for (int j = 0; j < strlen(str); j++)
    {
        if (j % 2 == 0)
        {
            str[j] = tolower(str[j]);
        }
        else
        {
            str[j] = toupper(str[j]);
        }
    }
    printf("Alternative UPPERCASE and lowercase\n%s", str);
    return 0;
}