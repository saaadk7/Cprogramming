// captial to small

#include <stdio.h>
int main()
{
    // Write your logic here...
    char ch;
    printf("Enter the Character : ");
    scanf("%c", &ch);

    switch (ch >= 'A' && ch <= 'Z')
    {
    case 1:
        ch += 32;
        printf(" %c ", ch);
        break;
    case 0:
        printf(" %c ", ch);
        break;
    }

    return 0;
}
