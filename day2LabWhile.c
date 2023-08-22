#include <stdio.h>
int main()
{

    // Write your code here...
    int n, sum = 0, mul = 1, temp;
    printf("Enter the number : ");
    scanf("%d", &n);
    mul = n * n;
    while (mul != 0)
    {
        temp = mul % 10;
        sum += temp;
        mul /= 10;
    }
    (n == sum) ? puts("Neon Number") : puts("Not A Neon Number");
    return 0;
}