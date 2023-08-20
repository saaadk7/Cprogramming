// Program for printing Natural Number till N

#include <stdio.h>
#include <conio.h>
int main()
{
    long n;
    printf("Enter the number You want to print Natural Numbers till : ");
    scanf("%ld", &n);
    int i = 1;
    while (i <= n)
    {
        printf("%d \t", i);
        i++;
    }
    return 0;
}