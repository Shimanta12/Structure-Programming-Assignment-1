#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num >= 80)
        printf("5.0\n");
    else if (num >= 75)
        printf("4.75\n");
    else if (num >= 70)
        printf("4.50\n");
    else if (num >= 65)
        printf("4.25\n");
    else if (num >= 60)
        printf("4.00\n");
    else if (num >= 55)
        printf("3.75\n");
    else if (num >= 50)
        printf("3.50\n");
    else if (num >= 45)
        printf("3.25\n");
    else if (num >= 40)
        printf("3.00\n");
    else if (num >= 33)
        printf("2.75\n");
    else
        printf("0.0");

    return 0;
}