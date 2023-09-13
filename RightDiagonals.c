#include <stdio.h>
int main()
{
    int nr = 3, nc = 3;
    int sum = 0;
    int arr[10][20];
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("Element-[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < nr; i++)
    {

        for (int j = 0; j < nc; j++)
        {
            if (i + j == nr - 1)
                sum += arr[i][j];
        }
    }
    printf("Addition of right diagonals : %d ", sum);

    return 0;
}