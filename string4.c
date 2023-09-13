#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char s[100];
    int i;
    int v;
    printf("Enter The String : ");
    scanf("%[^\n]", s);
    for (v = i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (char)(s[i] + 32);
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
        }
    }
    if (v == 0)
    {
        printf("No vowels In this String");
    }
    else
        printf("String Contains Vowels: %d", v);

    return 0;
}