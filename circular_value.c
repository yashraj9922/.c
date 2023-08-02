#include <stdio.h>

void circular(int *x, int *y, int *z)
{
    int temp = *x;
    *x = *z;
    *z = *y;
    *y = temp;
}
int main()
{
    int x, y, z;
    printf("Enter 3 numbers ");
    scanf("%d%d%d", &x, &y, &z);

    circular(&x, &y, &z);

    printf("Values after right circular %d %d %d", x, y, z);

    return 0;
}