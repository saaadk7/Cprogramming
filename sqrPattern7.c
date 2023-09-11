// Pattern Q 1
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, j;
    for (i = 1; i <= 5; i++)
    {
        int k = i;

        for (j = 1; j <= 5; j++)
        {

            printf("%4d", k);
            k++;
        }

        printf("\n");
    }

    return 0;
}