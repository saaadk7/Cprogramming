#include <stdio.h>
int main()
{

    long n, rev = 0;
    int r;
    printf("Enter the Number: ");
    scanf("%ld", &n);
    int temp = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    if (rev == temp)
        printf(" %d Its a palindrom number ", rev);
    else
        printf("%d Its Not A Palindrom Number", rev);
    return 0;
}