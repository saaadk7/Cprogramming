// program for NUmber of days in month
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter Month Number: \t");
    scanf("%d", &n);
    if (n <= 12)
    {
        switch (n)
        {
        case 4:
        case 6:
        case 9:
        case 11:
            puts("30 Days in this month");
        case 2:
            puts("29/28 Days in month");
            break;
        default:
            puts("31 days In the Month");
        }
    }
    else
        puts("Invalid NUmber of month");
    return 0;
}