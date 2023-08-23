#include<stdio.h>
int main() {
    
  
 int n;
 puts("Enter the Number (Table To be Calculated):");
 scanf("%d",&n);
 
 for(int i=1;i<=10;i++)
 {
     printf("%d * %d = %d \n",n,i,n*i);
 }
    
    return 0;
}