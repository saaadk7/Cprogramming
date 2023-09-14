#include <stdio.h>
int main()
{
    // Write Code Here
    char s[100];
    printf("Enter the String: ");
    scanf("%s", s);
    int i, k, c;
    for (k = 0; s[k] != '\0'; k++)
        ;
    for (int m = 0; m < k - 1; m++)
    {

        if (s[m] > 'A' && s[m] < 'Z')
            s[m] += 32;
    }

    c = 1;
    for (i = 0; i <= k / 2; i++)
    {
        if (s[i] != s[--k])
            c = 0;
    }
    if (c == 1)
        printf("%s is Plaindrom String", s);
    else
        printf("%s is not palindrom Number ", s);

    return 0;
}