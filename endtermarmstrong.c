#include<stdio.h>
int main()
{
    int n,i,r,sum=0,temp;
    printf("enter a number");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum = sum+(r*r*r);
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("armstrong");
    }
    else
    printf("not");

}