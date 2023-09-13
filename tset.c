#include <stdio.h>

void main()
{
    int a[10], b, c, i;

    printf("enter array size :");
    scanf(" %d", b);

    printf("enter %d element :\n", b);

    for (i = 0; i < b; i++)
    {
        printf("element %d  :");
        scanf(" %d", a[i]);
    }
}
int