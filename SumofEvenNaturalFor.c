#include <stdio.h>
int main()
{

    // Write your code here...
    int n;
    int sum = 0;
    puts("Enter The Number OF Terms: ");
    scanf("%d", &n);
    printf("The Even Numbers are :");
    for (int i = 1; i <= n * 2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);

            sum += i;
        }
    }
    printf("\nThe Sum of Even Numbers Are : %d", sum);

    return 0;
}