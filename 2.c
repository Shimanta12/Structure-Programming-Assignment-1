#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c = a + b;
    printf("Sum of entered numbers = %d\n", c);
    return 0;
}