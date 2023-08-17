#include <stdio.h>
#include <conio.h>

int main()
{
    int id;
    int pass;
    char name[10];
    puts("Enter Your Name: \n");
    scanf("%s", name);
    puts("Enter Your ID : ");
    scanf("%d", &id);
    switch (id)
    {
    case 1001:

        puts("Please Enter Your Password : \t");
        scanf("%d", &pass);
        switch (pass)

        {
        case 1010:
            printf("Name OF the User: %s", name);
            break;
        default:
            puts("Wrong Pass");
        }
        break;
    default:
        puts("Id Dosnt Exist");
    }
    return 0;
}
