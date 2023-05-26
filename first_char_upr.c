#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[10];
    printf("Enter the string ");
    gets(str);
    str[0] = toupper(str[0]);
    // printf("%s", str);
    for(int i = 0; i<strlen(str); i++)
    {
        if(str[i] == ' ')
        // if(str[i] == " ")
        {
            // if(str[i+1]>=97 && str[i+1]<=122)
            // {
            str[i+1] = toupper(str[i+1]);
            // }
        }
    }
    printf("modifed string is\n%s", str);
    return 0;
}