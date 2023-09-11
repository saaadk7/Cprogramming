// Pattern Q 1
#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 1, i, j;
    for (i = 1; i <= 5; i++)
    {
        //  int k = i;
        for (j = 1; j <= 5; j++)
        {

            if ((i + j) % 2 == 0)
                printf("0");
            else
                printf("1");
        }

        printf("\n");
    }

    return 0;
}