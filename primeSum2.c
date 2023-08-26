#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, j, count, sum = 0;
    printf("Enter the number :  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1, count = 0; j <= n; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            sum += i;
        }
    }
    printf("%d", sum);
}