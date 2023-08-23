#include <stdio.h>
int main()
{

    // write your logic here....
    int n;
    float sum = 1;
    puts("Enter The Number: ");
    scanf("%d", &n);
    printf("1 -");
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum - (1.0 / i);
            printf(" 1/%d ", i);
        }
        else
        {
            sum = sum + (1.0 / i);
            printf("+ 1/%d -", i);
        }
    }
    printf("\b \n");
    printf("Sum of Harmonic Series %lf", sum);

    return 0;
}