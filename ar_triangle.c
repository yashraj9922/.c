#include <stdio.h>
#include <math.h>

int area(int *a, int *b, int *c)
{
    float s = (*a + *b + *c)/2.0;
    float ar =(float)sqrt(s*(s - *a)*(s - *b)*(s - *c));

    printf("Area of a Triangle %.2f", ar);
    return 0;
}
int main()
{
    int a, b, c;
    float s, ar;
    
    printf("Enter the sides of a triangle ");
    scanf("%d%d%d", &a, &b, &c);

    area(&a, &b, &c);

    return 0;
}