
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    puts("Enter Number :  ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            printf("  ");

        for (int j = 1; j <= i; j++)
        {
            
                printf(" *  ");
        }
        for (int j = n; j <=i; j--)
        {
            
                printf(" *  ");
        }
        printf("\n");
    }

    return 0;
}