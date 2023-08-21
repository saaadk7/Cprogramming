// To find the given Number Is 2 digit Or Not
#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter The number bro \n");
    scanf("%d", &number);

    if (number <= -9 && number <= 99 || number >= 10 && number <= 99)
        puts("2 digit Number ");
    else
        puts("Baigan ka Number");
    return 0;
}