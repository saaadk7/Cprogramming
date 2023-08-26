#include <stdio.h>
int main()
{

    int n;
    int sum = 0;
    printf("Enter A Number : ");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    (sum == n) ? printf("%d is a perfect Number", sum) : puts("Its Not A Perfect NUmber");

    return 0;
}
