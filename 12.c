#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Enter a character: ");
    char i = getch();

    switch (i)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("\ndigit\n");
        break;
    default:
        printf("\nnon digit\n");
    }
    return 0;
}