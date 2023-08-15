//program for money denomination
#include<stdio.h>
#include<conio.h>
int main()
{
 int amount ;
 printf("Enter The Amount  : \t");
 scanf("%d",&amount);
 if(amount <=0)
 printf("Get Lost ");
  if(amount/500 != 0)printf("%d Notes Of 500  \n ",amount/500);
  amount%=500;
  if(amount/200!=0)printf("%d Notes Of 200  \n", amount /200);
  amount%=200;
  if(amount/100!=0)printf("%d Notes Of 100 \n ",amount/100);
  amount%=100;
  if(amount/50!=0)printf("%d Notes Of 50 \n",amount/50);
  amount%=50;
  if(amount/20!=0)printf("%d Notes Of 20 \n",amount/20);
  amount%=20;
  if(amount/10!=0)printf("%d Notes Of 10 \n",amount/10);
  amount%=10;
    if(amount/5!=0)printf("%d Notes Of 5 \n",amount/5);
  amount%=5;
    if(amount/2!=0)printf("%d Notes Of 2 \n",amount/2);
  amount%=2;


return 0;
}