#include <stdio.h>
int main()
{

    int n;
    int res = 0;
    puts("Enter Number: ");
    scanf("%d", &n);
    int temp = n;

    while (n != 0)
    {
        temp = n % 10;
        if (temp != 0)
        {
            res += temp;
        }
        n = n / 10;
    }

    printf("%d", res);

    return 0;
}