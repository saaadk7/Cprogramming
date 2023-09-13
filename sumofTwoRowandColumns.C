#include <stdio.h>
int main()
{
    int nr = 2, nc = 2;
    int sum = 0, sum1 = 0;
    int arr[10][20];
    int a[10][20];
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("Element-[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The first Matrix is : \n");
    for (int i = 0; i < nr; i++)
    {
        sum = 0;
        for (int j = 0; j < nc; j++)
        {

            printf("%4d", arr[i][j]);
            sum += arr[i][j];
        }
        printf("%4d", sum);
        printf("\n");
    }
    for (int i = 0; i < nr; i++)
    {
        sum = 0;
        for (int j = 0; j < nc; j++)
        {

            sum += arr[j][i];
        }
        printf("%4d", sum);
    }

    return 0;
}