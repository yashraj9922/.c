#include <stdio.h>
#include <string.h>
int main()
{
    char str[10], cpy[10];
    printf("Enter a string to be copied ");
    gets(str);
    strcpy(cpy, str); // jismai copy karna hai whu pehele likho
    puts(cpy);
    int len = strlen(cpy);
    printf("\nNo. of characters copied %d", len);
    return 0;
}