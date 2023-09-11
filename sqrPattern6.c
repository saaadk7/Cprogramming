// Pattern Q 1
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, j;
    int temp;
    for (i = 1; i <= 5; i++)
    {
        n = i;
        for (j = 1; j <= 5; j++)
        {
            temp = n * j;
            printf("%4d", temp);
        }
        //  n++;
        // temp=i;
        printf("\n");
    }

    return 0;
}