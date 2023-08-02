#include <stdio.h>
int main()
{
    int size, temp;
    printf("Enter the number of element store in array :- ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the elements of an array ");
        scanf("%d", &arr[i]);
    }

    for (int a = 0; a < size; ++a)
    {
        for (int b = a + 1; b < size; ++b)
        {
            if (arr[a] > arr[b])
            {
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }
    for (int k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    printf("second smallest element %d\n", arr[1]);
    printf("second largest element %d", arr[size - 2]);
    return 0;
}
