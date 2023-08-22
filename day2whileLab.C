#include <stdio.h>
int main()
{

    // Write your code here...
    int n, d;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int sum = 0;
    int mul = 1;

    while (n != 0)
    {
        d = n % 10;
        sum += d;
        mul *= d;
        n /= 10;
    }
    (sum == mul) ? puts("Spy Num") : puts("Not A Spy Number");
    return 0;
}