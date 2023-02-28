#include <stdio.h>

int main()
{
    int x, a, b;
    scanf("%d %d", &a, &b);
    switch (b)
    {
    case 0:
        printf("divide by zero error\n");
        break;
    default:
        x = a / b;
        printf("%d\n", x);
    }
    return 0;
}