// Printing Even ODD without %
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter the Character : ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        puts("Its a Digit");
        return 0;
    }
    if (ch <= 'A' && ch <= 'Z')
        ch += 32;
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        puts("The Character is Vowel");
        break;

    default:
        puts("The Character is Consonent");
    }
    return 0;
}