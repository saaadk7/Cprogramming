#include <stdio.h>
int main()
{

    // Write your code here...
    int n, sum = 0, sum1 = 0, temp, c = 2;
    puts("Enter the Number : ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0)
    {
        n = temp % 10;
        temp /= 10;
        if (c % 2 == 0)
        {
            sum += n;
        }
        else
        {
            sum1 += n;
        }
        c++;
    }
    if (sum == sum1)
    {
        puts("alternate digit same");
    }
    else
    {
        puts("not same");
    }

    return 0;
}