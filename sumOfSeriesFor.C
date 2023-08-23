#include <stdio.h>
int main()
{

      int n;
    int sum = 0;
    int p = 1;
    puts("Input the Number OF Terms: ");
    scanf("%d", &n);
    printf("%d", p);
    for (int i = 1; i < n; i++)
    {
        p = p * 10 + 1;
        printf("+%d", p);
        sum += p;
    }
    printf("\nSum of The Number Is :%d", sum + 1);

    return 0;
}