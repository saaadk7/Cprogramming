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
            if (i > j)
            {
                arr[i][j] = 0;
            }
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}