#include <stdio.h>
int main()
{

    // Write your code here...
    int n, temp, temp1;
    int c = 0;
    printf("Enter the Number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        temp = n % 10;
        n /= 10;
        temp1 = n % 10;

        if (temp - temp1 != 1)
            c++;
    }
    if (c != 0)
    {
        puts("Not A Step Number ");
    }
    else
        puts("Its Step Number ");
    return 0;
}