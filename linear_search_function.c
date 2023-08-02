#include <stdio.h>
// int function(int arr[], int size, int find)
// {
//     int counter = 0;
//     for (int a = 0; a < size; ++a)
//     {
//         if (arr[a] == find)
//         {
//             printf("%d ", a);
//             counter++;
//         }
//     }
//     return counter;
// }
int main()
{
    int size, find;
    printf("Enter the number of element store in array :- ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the elements of an array ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find ");
    scanf("%d", &find);
    int counter = 0;
    for (int a = 0; a < size; ++a)
    {
        if (arr[a] == find)
        {
            printf("index of %d is %d\n", find, (a + 1));
            counter++;
        }
    }

    // int count = function(arr, size, find);
    printf("frequency of %d = %d", find, counter);
    return 0;
}
