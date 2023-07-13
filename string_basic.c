#include <stdio.h>
#include <string.h>
int main()
{
    char *ptr[11];
    printf("Enter the String ");
    scanf("%s", ptr);
    int k = strlen(*ptr);
    // gets(ptr);
    // fflush(stdin);
    printf(*ptr);
    printf("\nlength of a function %d", k);
    return 0;
}
