
#include <stdio.h>
#include <conio.h>

int main()
{
    int sum = 0;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int temp = n;
    int d, j, cube;
    if (temp >= 100 && temp <= 999)
    {
        while (temp != 0)
        {
            d = temp % 10;
            j = d;
            //   d=j*j*j;
            for (int i = 1; i < 3; i++)
            {
                cube = d * j;
                d = cube;
            }
            //  printf("%d ",d);
            sum += d;
            temp /= 10;
        }
        (sum == n) ? puts("Its A Armstrong Number") : puts("It Is Not The Armstrong Number");
    }
    else
    {
        printf("Enter Vslid number ");
    }

    return 0;
}
