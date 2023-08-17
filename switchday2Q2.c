#include <stdio.h>
#include <conio.h>

int main()
{

    char name[20];
    int score;
    char name1[20];
    int score1;
    // first Persons details
    printf("Enter 1st Persons name : ");
    scanf("%s", &name);
    printf("Enter Score : ");
    scanf("%d", &score);
    // second persons details
    printf("Enter 2nd Persons name : ");
    scanf("%s", &name1);
    printf("Enter Score : ");
    scanf("%d", &score1);
    switch (score > score1)
    {
        // case 0:
        //     printf("%s is winner ", name1);
        //     printf("The person win the Game By %d points", score1 - score);
        //     break;

    case 1:
        printf("%s person is winner ", name);
        printf("The person win the Game By %d points", score - score1);
        break;

    case 0:
        switch (score1 > score)
        {
        case 1:
            printf("%s person is winner ", name1);
            printf("The person win the Game By %d points", score1 - score);
            break;
        case 0:
            puts("BOthe Guys Have Same Score !!");
        }
    }

    return 0;
}
