#include <stdio.h>
int main()
{
    long determinant;
    int a[3][3];
    for(int i=0; i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Enter the elements of a 3x3 array : ");
            scanf("%d", &a[i][j]);
            fflush(stdin);
        }
    }
    determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    printf("Value of Determinant is %d", determinant);

    return 0;
}
