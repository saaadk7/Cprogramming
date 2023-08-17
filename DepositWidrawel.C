// Depsoit money and widraw

#include <stdio.h>
#include <conio.h>

int main()
{
    float curr_bal;
    float amt;
    float bal;
    char op;
a:
    printf("Enter The Balance: \n");
    scanf("%f", &bal);
    if (bal <= 0 || bal < 2000)
    {
        puts("amount cant be stored");
        goto a;
    }

    printf("Enter The Operation You wanna do ? (w) for Widrawel and (d) for Desopsit \t []\b");
    scanf(" %c", &op);

    switch (op)
    {
    case 'd':
    valid:
        puts("How Much Money Do You Want to Deposit ?");
        scanf("%f", &amt);
        printf("Previos balace was : %.2f Rupees. \n", bal);
        if (amt >= 0)
        {
            curr_bal = bal + amt;
        }
        else
        {
            puts("Enter Valid Amount . ");
            goto valid;
        }
        printf("Current balace is : %.2f Rupees. \n", curr_bal);
        break;

    case 'w':
    b:
        puts("How Much Money Do You Want to Widraw ?");
        scanf("%f", &amt);
        printf("Previos balace was : %f Rupees. \n", bal);
        if (amt <= 0 || amt > bal)
        {

            puts("Invalid Amt");
            goto b;
        }
        else
            curr_bal = bal - amt;
        printf("Current balace is : %f Rupees. \n", curr_bal);
        break;

    default:
        puts("Invalid Operation");
    }
    return 0;
}
