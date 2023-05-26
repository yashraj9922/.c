#include <stdio.h>
int main()
{
    int row, col, temp, i, j;
    printf("Enter the order of array :- ");
    scanf("%d%d", &row, &col);
    int arr[row][col], tra[col][row];
    for(i=0; i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("Enter the elements of the array : ");
            scanf("%d", &arr[i][j]);
            // fflush(stdin);
        }
    }
    
    for(int a=0;a<row;++a)
    {
        for(int b = 0;b<col;++b)
        {
            tra[b][a] = arr[a][b];
        }
    }
    
    for(int k=0;k<row;k++)
    {
        for(int l=0; l<col; l++)
        {
            printf("%d ", tra[k][l]);
            fflush(stdin);
        }
        printf("\n");
    }  
    return 0;
}