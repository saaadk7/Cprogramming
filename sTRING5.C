#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char s[100], temp;
    int i, j;

    printf("Enter The String : ");
    scanf("%s", s);
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
    printf("Sorted String is:%s", s);

    return 0;
}