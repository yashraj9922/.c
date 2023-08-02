#include <stdio.h>
#include <math.h>

int avg_std(int *a, int *b, int *c, int *d, int *e)
{
    float average = (float)(*a + *b + *c + *d + *e) / 5;
    float stdev = sqrt(((average - *a) * (average - *a) + (average - *b) * (average - *b) +
                        (average - *c) * (average - *c) + (average - *d) * (average - *d) +
                        (average - *e) * (average - *e)) /
                       5);
    printf("Average of numbers is %.2f\n", average);
    printf("Standard Deviation of numbers is %.2f", stdev);
    return 0;
}
int main()
{
    int a, b, c, d, e;
    printf("Enter the numbers ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    avg_std(&a, &b, &c, &d, &e);
    // printf("%f", av);
    return 0;
}