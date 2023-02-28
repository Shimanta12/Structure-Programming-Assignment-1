#include <stdio.h>

int main()
{
    int i, num, is_prime = 1;
    printf("Enter the number to test: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
        if ((num % i) == 0)
        {
            is_prime = 0;
            break;
        }
    if (is_prime)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);

    return 0;
}