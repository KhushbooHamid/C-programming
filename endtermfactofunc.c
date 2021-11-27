#include<stdio.h>
int fact(int x)
{
    int f=1,i;
    for(i=x;i>=1;i--)
    f=f*i;
    return f;
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
   printf("%d", fact(n)) ;
}