#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, j, count = 0, sum = 0;
    printf("Enter the number :  ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        for (j = 1, count = 0; j <= i; j++)
        {

            if (i % j == 0)
                count++;
        }
        if (count == 2)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf(" \n %d ", sum);
}