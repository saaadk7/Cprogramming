#include <stdio.h>
#include <conio.h>
int main()
{
    int wheels;
    int age, tyre, fuel, engine, general;
    int bill;
    int problem;
    char name[20], bike_name[20], issue[20];
    printf("Enter Vehical type(no of wheels ): \t ");
    scanf("%d", &wheels);

    if (wheels == 2 || wheels == 3 || wheels == 4)
    {
        printf("Enter the age of the vehical (in months): \t");
        scanf("%d", &age);
        if (age > 8)
        {
            printf("1.Enter 1 for tyre problem\n");
            printf("2.Enter 2 for fuel problem\n");
            printf("3.Enter 3 for engine problem\n");
            printf("4.Enter 4 for general problem\n");
            // we accept the input from user
            scanf("%d", &problem);
            // main sol
            if (problem == 1)
            {
                printf("How many tyers faceing the issue :");

                scanf("%d", &tyre);
                if (tyre == 1)
                    bill = 400;
                else if (tyre == 2)
                    bill = 400 * 2;
                else if (tyre == 3)
                    bill = 400 * 3;
                else if (tyre == 4)
                    bill = 400 * 4;
                else
                    puts("invalid input");
            }
            else if (problem == 2)
            {
                bill = 1500;
            }
            else if (problem == 3)
            {
                bill = 5000;
            }
            else if (problem == 4)
            {
                bill = 1000;
            }
            else
            {
                puts("Invalid Input ");
            }
        }
        else
        {

            printf("Your Vehical's Service will Done After A While. ");
            goto a;
        }
    }

    else
        printf("This Service Center is not accepting other then 2 wheelers , 3 wheelers and 4 wheelers");
    if (wheels == 2 || wheels == 3 || wheels == 4)
    {
        printf("Enter owner name: \t");
        scanf("%s", name);

        if (wheels == 2)
        {
            printf("Enter Bike Name: \t");
            scanf("%s", bike_name);
        }
        else if (wheels == 3)
        {
            printf("Enter 3 wheeler Name: \t");
            scanf("%s", bike_name);
        }
        else if (wheels == 4)
        {
            printf("Enter  Car Name: \t");
            scanf("%s", bike_name);
        }
        printf("What was the issue : \t");
        scanf("%s", issue);
        puts("--------------------------------------------------------------------");
        printf("Owner name :%s \n ", name);
        printf("Vehical_name: %s \n", bike_name);
        printf("Issue: %s \n", issue);
        printf("Your bill is : %d \n ", bill);
        puts("-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --");
    }
a:
    return 0;
}