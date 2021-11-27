#include<stdio.h>
int fact(int x)
{   int f;
    if(x>1)
    return (x*fact(x-1));
    else
    return 1;
    
}
int main()
{
    int n,i,f;
    printf("enter a number");
    scanf("%d", &n);
    f=fact(n);
    printf("%d", f);
}