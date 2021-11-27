#include<stdio.h>
int fib(int n)
{
    int i,n3,n2=1,n1=0;
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("%d ", n3);
        n1=n2;
        n2=n3;
    }
}
int main()
{
    int n1=0,n2=1,n;
    printf("enter the range");
    scanf("%d", &n);
    printf("%d %d", n1,n2);
    fib(n);
}