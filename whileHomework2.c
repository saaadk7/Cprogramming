// sum of the Numbers till N
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0;
    puts("Enter the value of n :");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("Even Numbers: %-4d", i);
        }
        else if (i % 2 != 0)
        {
            printf("odd numbers :%-4d", i);
        }
        i++;
        sum+=n-i;
    }

    printf("%d", sum);
    return 0;
}