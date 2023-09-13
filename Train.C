#include <stdio.h>
#include <conio.h>
int main()
{

    int i, j, k = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (j = i; j <= 4; j++)
        {
            if (j % 2 == 0)
                printf("%4d", j);
            else
                printf("    *");
        }
        printf("\n");
    }
    return 0;
}