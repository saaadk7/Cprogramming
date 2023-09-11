// Pattern Q 1
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    for (int r = 1; r <= 5; r++)
    {
        n = 1;
        for (int c = 1; c <= 6; c++)
        {
            if (c % 2 == 0)
                printf("%4d", r);
            else
                printf("%4d", n++);
        }
        printf("\n");
    }

    return 0;
}