
#include <stdio.h>
#include <conio.h>

int main()
{

    int sub1, sub2, sub3, sub4, sub5;
    int total;
    int per;
    printf("Enter All  the subjects : \n");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    per = total / 5;
    printf("%d \n", per);
    switch (per / 10)
    {
    case 10:
    case 9:
        printf("Grade A");
        break;
    case 8:
        printf("Grade B");
        break;

    case 7:
        printf("Grade C");
        break;
    case 6:
        printf("Grade D");
        break;

    case 5:
    case 4:
        printf("grade E");
        break;
    case 3:
    case 2:
    case 1:
        puts("Grade F");
        break;
    }

    return 0;
}
