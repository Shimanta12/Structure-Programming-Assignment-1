#include <stdio.h>

int main()
{
    int i;
    float x[10], total;

    printf("Enter 10 Real numbers:\n");
    for (i = 0; i < 10; i++)
    {
        printf("x[%d] = ", i + 1);
        scanf("%f", &x[i]);
    }

    total = 0.0;

    for (i = 0; i < 10; i++)
        total = total + x[i];

    printf("\n");

    for (i = 0; i < 10; i++)
        printf("x[%d] = %0.2f\n", i + 1, x[i]);

    printf("\ntotal = %0.2f\n", total);
}