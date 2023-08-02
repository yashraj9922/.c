#include <stdio.h>
int main()
{
    int hcf, lcm, n1, n2, temp, min;
    printf("Enter the two numbers ");
    scanf("%d%d", &n1, &n2);
    if (n1 > n2)
    {
        temp = n1;
        min = n2;
    }
    else
    {
        temp = n2;
        min = n1;
    }
    // if(n1<n2)
    // {
    //     min = n1;
    // }
    // else
    // {
    //     min = n2;
    // }
    while (1)
    {
        if (temp % n1 == 0 && temp % n2 == 0)
        {
            printf("LCM is %d\n", temp);
            break;
        }
        temp++;
    }
    printf("HCF is %d ", n1 * n2 / temp);

    //     for(int i=0;i<min;i++)
    //     {
    //         if(n1%i==0 && n2%i==0)
    //         {
    //             hcf = i;
    //         }
    //     }
    //     printf("HCF of two numbers is %d ", hcf);
    return 0;
}