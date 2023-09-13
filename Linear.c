#include <stdio.h>

int main()
{

    int n, i, key;
    int a[10];

    puts("enter value");
    scanf(" %d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }
    puts("enter value for search");
    scanf(" %d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            puts("it is found");
        }
        else
        {

            puts("not found");
        }
    }

    return 0;
}
