#include <stdio.h>
#include <ctype.h>
int main()
{

    // Write your logic here...
    char gen;
    int age;
    puts("Enter The Gender (m/M for male, f/F for female) : ");
    scanf(" %c", &gen);
    gen = tolower(gen);

    switch (gen)
    {
    case ('m'):

        puts("Enter the Age : ");
        scanf("%d", &age);

        switch (age > 22)
        {
        case 1:
            puts("Youre Eligible For Marrige.");
            break;
        case 0:
            puts("Youre Not eligible for marrige");
            break;
        }
        break;

    case ('f'):
        puts("Enter Your Age : ");
        scanf("%d", &age);
        switch (age > 18)
        {
        case 1:
            puts("Youre eligible for marrige. ");
            break;
        case 0:
            puts("Youre Not Eligible For marrige");
            break;
        }
        break;

    default:
        puts("Invalid Gender");
    }
    return 0;
}