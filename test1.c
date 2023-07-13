#include <stdio.h>
int main()
{
    int i=34;
    int *ptr=&i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("Now the value of ptr is %u", ptr);


    char c =34;
    char *ptr = &c;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("Now the value of ptr is %u", ptr);
    
    return 0;
}