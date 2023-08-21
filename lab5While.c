#include <stdio.h>
int main()
{
    int n ,sum1=0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    int temp = n;
    while (n != 0)
    {
        int rev = n % 10;
    int sum = 1;
        while (rev != 0)
        {
            sum *= rev;
            rev--;
        }
        sum1=sum1+sum;
        n /= 10;
    }
    (sum1 == temp) ? printf("Its Strong Number ") : puts("its NOT sTRONG number ");

    return 0;
}