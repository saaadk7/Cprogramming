#include <stdio.h>
#include <conio.h>

int main()
{

    int age;
    float height;
    char VIP;
    int pay, disc_pay;
    printf("Enter the Age of Person :");
    scanf("%d", &age);
    printf("Enter the height of the person(In Centimeters):");
    scanf(" %f", &height);
    printf("Wether The Person Have Vip Pass OR not (Y/N):");
    scanf(" %c", &VIP);

    if (age > 0 && height > 0)
    {
        if (age <= 3)
        {
            // printf("ENTRy is Freee ");
        }
        else if (age >= 4 && age <= 12)
        {
            pay = 20;
            // printf("Pay Rs. %d \n", pay);
        }
        else if (age >= 13 && age <= 64)
        {
            pay = 100;
            //  printf("Pay Rs. %d \n", pay);
        }
        else if (age >= 65)
        {
            pay = 50;
            // printf("Pay Rs. %d \n ", pay);
        }
    }
    else
    {
        puts("Age cannot be Negitive");
    }
    if (height > 180)
    {
        disc_pay = pay + 50;
    }
    else if (height >= 120 && height <= 180)
    {
        puts("No Extra charges");
    }
    else if (height < 120)
    {
        disc_pay = pay - (pay * 50 / 100);
        // printf("Pay Rs. %d \n ", pay);
    }
    if (VIP == 'y' || VIP == 'n')
    {
        disc_pay = pay - (pay * 10 / 100);
        printf("vip pass amount : %d \n", disc_pay);
    }
    else
    {
        printf("  Finel Amount : %d \n ", pay);
    }
    return 0;
}