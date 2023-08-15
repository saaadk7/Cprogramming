#include<stdio.h>
#include<conio.h>

int main()
{
int number;
puts("Enter The Number Bro");
scanf("%d",&number );

if((number &1)==0)puts("Its Even Number");
else puts("Its Odd Number");
return 0;
}