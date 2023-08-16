
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    int a, b;
    printf("Enter  two Numbers: ");
    scanf("%d%d", &a, &b);
    printf("Operation You wanna perform(+ - * / %):::  ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        printf(" Addition : %d", a + b);
        break;
    case '-':
        printf(" Substraction : %d", a - b);
        break;
    case '*':
        printf(" Multiplication : %d", a * b);
        break;
    case '/':
        printf(" Division : %.2f", (float)a / b);
        break;
    case '%':
        printf(" Mod : %.2f", (float)a / b);
        break;

    default:
        puts("Invalid Operation");
    }

    return 0;
}
