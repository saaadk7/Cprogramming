#include<stdio.h>
#include<conio.h>
int main()

{
long serno, pre, cur, units;
char name[30];
float amt;
printf("Enter service no "); scanf("%ld",&serno);
printf("Enter consumer name "); scanf("%s",name);
printf("Enter previous month reading "); scanf("%ld",&pre);
current:
printf("Enter current month reading "); scanf("%ld", &cur);
if( cur < pre ) { puts("\aCheck current month reading");goto
current; }
units = cur - pre;
if(units<=50)amt=units*1.45;
else if(units<=100) amt=50*1.45+(units-50)*2.8;
else if(units<=200)amt=50*1.45+50*2.8+(units-100)*3.05;

else if(units<=300)amt=50*1.45+50*2.8+100*3.05+(units-
200)*4.75;

else
if(units<=500)amt=50*1.45+50*2.8+100*3.05+100*4.75+(units
-300)*6;

else amt=50*1.45+50*2.8+100*3.05+100*4.75+200*6+(units-
500)*6.25;

if(amt<67) amt=67;
printf("Amount=%.2f",amt);
getch();
}