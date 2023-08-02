#include <stdio.h>

int pr_fact(int n)
{
    int count;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                printf("%d is a prime factor \n", i);
            }
            else if (count > 2)
            {
                printf("%d is not a prime factor \n", i);
            }
            count = 0;
        }
    }
    return 0;
}

int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);

    pr_fact(num);

    return 0;
}