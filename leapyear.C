#include<stdio.h>
#include<conio.h>

int main()
{
int year;
puts("Enter The Year ");
scanf("%d",&year);
if(year%4==0 && year %100 !=0 || year%400==0)
puts("It's a Leap Year ");

else puts("Its A commen year");



}