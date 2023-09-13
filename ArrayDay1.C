#include <stdio.h>
int main()
{
    int arr[10][20];
    int nr = 3, nc = 3;

    printf("Enter The Elements: \n");
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("element- [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
            printf("%d", arr[i][j]);
        // printf("\n");
    }
    return 0;
}