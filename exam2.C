
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter Any Alphabet:");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is Vowel \n", ch);
    }
    else
        printf("%c is consonant ", ch);
}
// aeiou