// Pattern Q 1
#include <stdio.h>
#include <conio.h>

int main()
{
    // int n = 2;

    for (int r = 1; r <= 4; r++)
    {
        for (int c = 5; c >= 1; c--)
        {

            printf("%4d", c);
        }
        printf("\n");
    }

    return 0;
}