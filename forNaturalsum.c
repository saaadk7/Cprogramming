#include <stdio.h>
int main()
{

    int sum = 0;
    int n;
    puts("Enter N value : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        sum += i;
    }

    printf(" sum of Natural Numbers is : %d ", sum);

    return 0;
}