#include <stdio.h>
int main()
{
    int num, m, sum, arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Enter the number ");
    scanf("%d", &num);
    for (int i = 0; i < 0; i++)
    {
        if (num == arr[i])
            break;
    }
    while (num > 0)
    {
        m = num % 10;
        sum = sum + m;
        num = num / 10;
    }
    // printf("%d", sum);
    if (num % sum == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}