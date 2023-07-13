#include <stdio.h>
#include <string.h>
int main()
{
    char w = "HI";
    char r;
    char *s = "Hello";
    char *q;
    q = s;
    r = w;
    printf("%s", q); 
    printf("%s", r);
    // return 0;
// }
// #include <stdio.h>
// int main()
// {
    char ch[1];
    gets(ch);
    char chr[22];
    char str[] = "HelLO_WoRld";
    printf("%d\n", strlen(str));
    strcpy(chr, ch);
    strcat(ch, str);
    printf("%s\n", ch);
    printf("%s\n", chr);
    // printf("\n%d", strlen(ch));
    return 0;
}