#include <stdio.h>
#include <conio.h>

int main()
{

    int id;
    printf("Please Enter Your ID :");
    scanf("%d", &id);
    switch (id)
    {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        puts("Software developer");
        break;

    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        puts("Developer department");
    case 21:
    case 22:
    case 23:
        puts("Managment departmenty");
        break;
    default:
        puts("Invalid input");
    }

    return 0;
}
