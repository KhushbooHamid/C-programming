#include<stdio.h>
int main()
{
  int n,temp,sum=0,r;
  printf("enter number");
  scanf("%d", &n);
  temp=n;
  while(n>0)
  {
      r=n%10;
      sum=(sum*10)+r;
      n=n/10;
  }
    n=temp;
    if(n==sum)
    printf("a palindrome");
    else
    printf("not a pldrm");
}