#include <stdio.h>

int main()
{
    int n, num, sum;
    sum = 0;
    scanf("%d", &n);
    for (num = 0; num <= n; num++)
    {
        sum += num;
    }
    printf("The summation of first %d numbers: %d", n, sum);
    return 0;
}