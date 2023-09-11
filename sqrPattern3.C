// Pattern Q 1
#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 2;

    for (int r = 1; r <= 4; r++)
    {
        for (int c = 1; c <= 5; c++)
        {

            printf("%4d", n);
            n += 2;
        }
        printf("\n");
    }

    return 0;
}