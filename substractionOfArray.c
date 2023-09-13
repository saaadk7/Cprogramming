#include <stdio.h>
int main()
{
    int nr, nc;
    int i, j, k, n;
    int arr[10][10];
    int a[10][10];
    puts("Enter size of the matrix (upto 5 only) : ");

    scanf("%d", &nr);
    if (nr > 5)
        puts("Invalid Input");

    nc = nr;

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The First Matrix is : \n");

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    for (k = 0; k < nr; k++)
    {
        for (n = 0; n < nc; n++)
        {
            scanf("%d", &a[k][n]);
        }
    }
    printf("The second Matrix is : \n");
    for (k = 0; k < nr; k++)
    {
        for (n = 0; n < nc; n++)
        {
            printf("%d", a[k][n]);
        }
        printf("\n");
    }

    printf("substraction Of two Matrix is : \n");
    for (int x = 0; x < nr; x++)
    {
        for (int y = 0; y < nc; y++)
        {
            printf("%4d", arr[x][y] - a[x][y]);
        }
        printf("\n");
    }

    return 0;
}