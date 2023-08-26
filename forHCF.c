#include <stdio.h>
int main()
{

    int n, n1, k, s = 0;
    printf("Enter 1st Number : ");
    scanf("%d", &n);
    printf("Enter 2nd Number : ");
    scanf("%d", &n1);
    k = (n < n1) ? n : n1;
    for (int i = 1; i <= k / 2; i++)
    {
        if (n % i == 0 && n1 % i == 0)
            s = i;
    }
    printf("%d is a Highest Common Factor for %d %d", s, n, n1);
    return 0;
}