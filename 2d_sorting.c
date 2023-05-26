#include <stdio.h>
int main()
{
    int row, col, temp;
    printf("Enter the order of array :- ");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    for(int i=0; i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("Enter the [%d][%d] elements of the array : ",i,j);
            scanf("%d", &arr[i][j]);
            // fflush(stdin);
        }
    }

    // For sorting row
    for(int r=0;r<row;r++)
    {
        for(int c1=0;c1<col;c1++)
        {
            for(int c2=c1+1;c2<col;c2++)
            {
                if(arr[r][c1]>arr[r][c2])
                {
                    temp=arr[r][c1];
                    arr[r][c1]=arr[r][c2];
                    arr[r][c2]=temp;
                }
            }
        }
    }
    printf("Row Sorting\n");
    for(int s=0;s<row;s++)
    {
        for(int e=0;e<col;e++)
        {
            printf("%d ", arr[s][e]);
        }
        printf("\n");
    }
    printf("\n");
    
    // For sorting coloumn
    for(int c=0; c < col; c++) 
    {
        for(int r = 0; r < row; r++) 
        {
            for(int r1 = r+1; r1 < row; r1++) 
            {
                if(arr[r][c] > arr[r1][c])
                {
                    temp = arr[r][c];
                    arr[r][c] = arr[r1][c];
                    arr[r1][c] = temp;
                }
            }
        }
    }
    printf("Column Sorting\n");
    for(int z=0;z<row;z++)
    {
        for(int x=0;x<col;x++)
        {
            printf("%d ", arr[z][x]);
        }
        printf("\n");
    }
    return 0;
}