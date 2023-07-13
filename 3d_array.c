#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the order of an array ");
    scanf("%d %d %d", x, y, z);
    int arr[x][y][z];
    for(int i = 0; i<x; i++)
    {
        for (int j = 0; j<y; j++)
        {
            for(int k = 0; k<z; k++)
            {
                // int arr[i][j][k];
                printf("enter [%d%d%d] element of an array ", i, j, k);
                scanf("%d ", &arr[i][j][k]);
            }            
        }
    }
    for(int i = 0; i<x; i++)
    {
        for (int j = 0; j<y; j++)
        {
            for(int k = 0; k<z; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}