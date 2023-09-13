#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char s[100];
    int i;
    int v, c, d, sp, spl;
    printf("Enter The String : ");
    scanf("%[^\n]", s);
    for (v = c = d = sp = spl = i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (char)(s[i] + 32);
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
            else
                c++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
            d++;
        else if (s[i] == ' ')
            sp++;
        else
            spl++;
    }

    printf("Number of Vowels: %d", v);
    printf("\nNumber OF Consonants: %d", c);
    printf("\nNumber of Digits :%d ", d);
    printf("\nNumber Of Spaces : %d", sp);
    printf("\nNumber Of Special char : %d", spl);
    return 0;
}