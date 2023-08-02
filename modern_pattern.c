#include <stdio.h>
int main()
{
    char ch = 'a';
    int row;
    printf("Enter the number of rows --> ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < (row - i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}
