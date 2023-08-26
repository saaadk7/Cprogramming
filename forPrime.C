#include <stdio.h>
int main()
{

    // Write your code here....
    int n, i;
    int p;
    puts("Enter a Number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        p = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % 2 == 0)
            {
                p = 0;
                break;
            }
        }
    }
    (p == 1) ? printf("%d Is a prime number", n) : puts("Its Not A Prime Number");

    return 0;
}