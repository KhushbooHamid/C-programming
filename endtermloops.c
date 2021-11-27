#include<stdio.h>
int main()
{
   int i,f=1,n;
   i=1;
   printf("enter a number");
   scanf("%d", &n);
   do
   {
      f = f*i;
      i++;
   }while(i<=n);
   printf("%d", f);
   
}