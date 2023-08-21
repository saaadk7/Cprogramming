#include <stdio.h>
int main()
{
    int n, s = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n / 2)
    {
        if (n % i == 0)
            s += i;
        i++;
    }
    (n == s) ? puts("Its a stong Number") : puts("Its Not A Storng number");

    return 0;
}