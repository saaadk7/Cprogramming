#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter The character  :  \t");
    scanf("%c", &ch);
    if (isupper(ch))
        ch = tolower(ch);
    else
        ch = toupper(ch);

    printf("character  = %c", ch);
    return 0;
}
