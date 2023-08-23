#include <stdio.h>
int main()
{

    int n;
    printf("Input Number Of Terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Number is %d and cube Of the Number is : %d \n", i, i * i * i);
    }

    return 0;
}