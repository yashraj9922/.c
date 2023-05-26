#include <stdio.h>
int power(int a, int b)
{
    if(a == 0)
    {
        printf("Value of Base cannot be 0");
        return 0;
    }

    else if(b == 0)
    {
        a = 1;
    }

    else
    {
        for(int i = 1; i<b; i++)
        {
            a = a * a;
        }
        // printf("Value of expression is %d", a);
    }
    printf("Value of expression is %d", a);
    // return a;
    return 0;
}
int main()
{
    int num, pow;

    printf("Enter the base ");
    scanf("%d", &num);

    printf("Enter the power ");
    scanf("%d", &pow);

    power(num, pow);
    // return num;
    return 0;

}