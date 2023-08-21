// To find factorial number

#include <stdio.h>
#include <conio.h>
int main()
{
    int n,f=1;
    printf("enter the valu: ");
    scanf("%d",&n);
    while(n>=1)
    {
        f=f*n;
        n--;

    }
    printf("Factorial: %d ",f);

     return 0;
}