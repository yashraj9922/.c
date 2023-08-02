#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j;
    char a[10], b[10], c[40];

    printf("Enter string1 ");
    gets(a);
    printf("Enter string2 ");
    gets(b);

    int a1 = strlen(a);
    int a2 = strlen(b);

    for (i = 0; i < a1; i++)
        c[i] = a[i];
    // printf("%s\n", c);
    // printf("%d\n", i);

    for (j = a1; j < (a1 + a2); j++)
        c[j] = b[j - a1];

    c[j] = '\0';
    // printf("%s", c);
    // printf("%d", j);

    printf("Concatenated strings \n");
    puts(c);

    int len = strlen(c);
    printf("length of Concatenated string is %d", len);
    return 0;
}