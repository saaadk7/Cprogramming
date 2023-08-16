#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter Two Numbers :");
    scanf("%d%d", &a, &b);
   //(a == b) ? puts("Both are same") : puts("Value: ");
   switch(a==b)
   {
    case 0:
    switch (a > b)
    {
    case 1:
        puts("A is Greater");
        break;
    default:
        puts("B is greater");
    }
    break;
    case 1: puts("Both are Equal");
    break;
}
}