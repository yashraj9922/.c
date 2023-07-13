#include <stdio.h>
int main()
{
    int i = 34;
    int *j = &i;
    printf("%d\n", i);
    printf("%d\n", *j);
    printf("%u\n", &i);
    printf("%u", &*j);
    return 0;
}