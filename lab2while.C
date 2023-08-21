#include <stdio.h>
int main()
{

    // Write your code here.....
    int i = 0;
    int j = 1;
    int f;
    int n;
    printf("Enter How Many Fabonacci Series You Want : ");
    scanf("%d", &n);
    printf(" %d %d", i, j);
    int a = 0;
    while (a < n)
    {
        f = i + j;
        printf(" %d ", f);
        i = j;
        j = f;
        f = i;
        a++;
    }

    return 0;
}