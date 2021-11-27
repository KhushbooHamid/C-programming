#include<stdio.h>
int main()
{
    int f=1,i,n;
    printf("enter a number");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("the factorial of given number is %d", f);
    return 0;
}