#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char s[100];
    int i;
    printf("Enter The String : ");

    scanf("%[^\n]", s);
    for (i = 0; s[i] != '\0'; i++)
        ;

    printf("%d", i);
    return 0;
}
