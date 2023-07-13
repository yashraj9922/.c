#include <stdio.h>
int main()
{
    char *str;
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    // ptr = fopen("sample1.txt", "w");
    // ptr = fopen("sample1.txt", "a");
    // printf(ptr);
    fscanf(ptr ,"%s", str);
    printf("The value is --> %s", str);
    return 0;
}
