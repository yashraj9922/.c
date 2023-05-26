#include <stdio.h>
int main()
{
    int size, find, even=0, odd=0, z=0;
    printf("Enter the number of element store in array :- ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size;i++)
    {
        printf("Enter the elements of an array ");
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<size; j++)
    {
        if(arr[j]!=0 && arr[j]%2==0)
        {
            even++;
        }
        else if(arr[j]!=0)
        {
            odd++;
        }
        else
        {
            z++;
        }    
    }
    printf("frequency of even numbers is %d\n", even);
    printf("frequency of odd numbers is %d\n", odd);
    printf("frequency of zeros is %d", z);
    return 0;
}