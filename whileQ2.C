// same program with difffrent method
//  Program for printing Natural Number till N

#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, n;
    puts("Enter The NUmber : ");
    scanf("%d", &n);

    while (i <= n)
        printf("%-4d", i++);
    return 0;
}