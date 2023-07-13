#include <stdio.h>

// passing arrays to a function
// de-referencing
// pointer to array
void printArray(int *ptr, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("The value of element is %d\n", *(ptr+i));
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    printArray(arr, 4);
    return 0;
}