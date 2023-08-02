#include <stdio.h>

void reverse(int *arr, int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int temp = arr[n - i - 1];
        arr[n - i - 1] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}