
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter The character  :  \t");
    scanf("%c", &ch);
if(ch>=65 && ch<=90)
{
    ch-32;
    printf("%c",ch);
}





    return 0;
}
