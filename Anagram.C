#include <stdio.h>
int main()
{
    // Write Code Here
    char s[100];
    char s1[200];
    int i, j;
    int temp, temp1;
    printf("Enter the String 1: ");
    scanf("%s", s);
    printf("\nEnter the String 2: ");
    scanf("%s", s1);

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

            if (s1[i] > s1[j])
            {
                temp1 = s1[i];
                s1[i] = s1[j];
                s1[j] = temp1;
            }
        }
    }
    for (int n = 0; s[n] != 0; n++)
    {
        if (s[n] != s1[n])
        {
            printf("String is not anagram");
            return 0;
        }
    }
    puts("String is anagram");
}