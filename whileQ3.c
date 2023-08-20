
//  Program for printing 1 to n numbers in reverse order

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    puts("Enter The NUmber : ");
    scanf("%d", &n);

    while (n >= 1)
    {

        printf("%-4d", n--);
    }
    return 0;
}