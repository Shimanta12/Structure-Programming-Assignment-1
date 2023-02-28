#include <stdio.h>

int main()
{
    float cent, farn;
    printf("Enter temperature in celcius: ");
    scanf("%f", &cent);
    farn = 1.8 * cent + 32;
    printf("Farenheit equivalent is = %.2f\n", farn);
    return 0;
}