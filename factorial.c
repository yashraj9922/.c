#include<stdio.h>
int factorial(int n)
{
    int fact;
    if(n==0 || n==1)
    {
        fact = 1;
        // printf("Factorial of a number %d", fact);
    }
    
    else
    {
        fact = 1;
        for(int i = 1; i<=n; i++)
        {
           fact = fact * i;
        }
        // printf("Factorial of a number %d", fact);
    }
    printf("Factorial of a number %d", fact);

    return 0;
}

int main()
{
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    factorial(num);

    return 0;    
}