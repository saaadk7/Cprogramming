
#include <stdio.h>
#include <conio.h>

int main()
{
    long int sum = 0;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int temp, temp1;
    if (n >= 1 && n <= 500)
    {
        for (int i = 1; i <= n; i++)

        {
            sum = i * i;

            if (i <= 9)
            {
                temp = sum % 10;
                (temp == i) ? printf("%d ", i) : printf("");
            }
            else if (i <= 99)
            {
                temp = sum % 100;
                (temp == i) ? printf("%d ", i) : printf("");
            }
            else if (i <= 500)
            {
                temp = sum % 1000;
                (temp == i) ? printf("%d ", i) : printf("");
            }
        }
        // printf("%d", temp);
    }
    else
    {
        puts("Invalid Number");
    }

    return 0;
}
