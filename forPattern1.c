
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    puts("Enter Number :  ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}