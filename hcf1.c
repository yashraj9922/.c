#include <stdio.h>
int main()
{
    int hcf, n1=3, n2=4;
    for(int i=0;i<3;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
    printf("HCF of two numbers is %d ", hcf);
    return 0;
}