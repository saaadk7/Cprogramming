#include <stdio.h>
#include <conio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the lengths of the sides of triangle :\n");

    puts("side 1 : ");
    scanf("%d", &side1);
    puts("side 2 : ");
    scanf("%d", &side2);
    puts("side 3 : ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3 && side3 == side1)
        puts("Equilateral triangle");
    else if (side1 != side2 && side2 != side3 && side3 != side1)
        puts("scalene triangle ");
    else if (side1 == side2 || side2 == side3 || side3 == side1)
        puts("Isoleces Triangle");

    return 0;
}