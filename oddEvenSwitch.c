#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter  Number :");
    scanf("%d", &n);

    switch (n % 2)
    {
    case 0:
        puts("This is Even Number ");
        break;
    default:
        puts("This is Odd Number");
    }
}