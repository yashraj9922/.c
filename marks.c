#include <stdio.h>

int marks(int *a, int *b, int *c)
{
    float avg = (float)(*a + *b + *c) / 3.0;
    float ptg = avg;
    printf("Average marks of a student is %.2f\n", avg);
    printf("Percentage marks of a student is %.2f", ptg);

    return 0;
}
int main()
{
    int a, b, c;
    // float av, p;

    printf("Enter the marks of 3 subjects ");
    scanf("%d%d%d", &a, &b, &c);

    marks(&a, &b, &c);

    return 0;
}