#include <stdio.h>
int main()
{
    // Write Code Here
    char s[100];

    int i, j, temp;

    printf("Enter the String 1: ");
    scanf("%[^\n]", s);
    for (i = 0; s[i] != '\0'; i++)
    {

        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    int c = 1;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1])
            c++;
        else
        {
            printf("\n %c occures %d times", s[i], c);
            c = 1;
        }
    }
}