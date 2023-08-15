#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter The key : \t ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("This is Small letter");
    else if (ch >= 'A' && ch <= 'Z')
        puts("Capital Letter");
    else if (ch >= '0' && ch <= '9')
        puts("This is Number ");
    else
        puts("This definately Special Character ");

    return 0;
}
