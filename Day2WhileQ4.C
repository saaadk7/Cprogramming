#include <stdio.h>
int main()
{

    // Russian Multiplication
    int n, n1, sum = 0, temp1, temp;

    printf("Enter the Numbner 1 : ");
    scanf("%d", &n);
    printf("Enter the Numbner 2 : ");
    scanf("%d", &n1);
    temp = n;
    temp1 = n1;
    while (temp1 > 0)
    {
        if (temp1 % 2 != 0)
        {
            sum += temp;
        }
        temp *= 2;
        temp1 /= 2;
    }
    printf("%d * %d =%d", n, n1, sum);

    return 0;
}