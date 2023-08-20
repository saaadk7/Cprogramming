
//  Program for printing odd numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, n;
    puts("Enter The NUmber : ");
    scanf("%d", &n);

    while (i <= n)

    {
        if (i % 2 != 0)
            printf("%-4d", i);
        i++;
    }
    return 0;
}