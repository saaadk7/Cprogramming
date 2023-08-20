// sum of the Numbers till N
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0, avg;
    puts("Enter the value of n :");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    avg = sum / n;
    printf("Sum OF the Numbers : %d \n", sum);
    printf("Average Of the Number : %d", avg);
}