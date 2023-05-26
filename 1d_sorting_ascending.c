#include <stdio.h>
int main()
{
    int size, temp;
    printf("Enter the size of an array :- ");
    scanf("%d", &size);
    int arr[size];
    
    for(int i=0; i<size;i++)
    {
        printf("Enter the elements of an array ");
        scanf("%d", &arr[i]);
    }

    for(int a=0;a<size;++a)
    {
        for(int b = a+1;b<size;++b)
        {
            if(arr[a]>arr[b])
            {
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;

            }
        }
    }
    for(int s=0;s<size;s++)
    {
        printf("%d ", arr[s]);
    }
    return 0;
}