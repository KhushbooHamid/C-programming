#include<stdio.h>
#include<string.h>
int main()
{
   char a1[100], a2[200],*p,*q;
   p=&a1, q=&a2;
   printf("enter the first string");
   gets(a1);
   int l,i;
   l=strlen(a1);
   
   for(i=l-1;i>=0;i--)
   *q=*p;
   printf("%s", *q);


}