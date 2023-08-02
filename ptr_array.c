#include <stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the elements of an array ");
        scanf("%d", ptr);
        ptr++;
    }
    for (int j = 0; j < 4; j++)
    {
        printf("%d ", marks[j]);
    }
    return 0;
}