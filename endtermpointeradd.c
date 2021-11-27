#include<stdio.h>
int main()
{
    int x,y,*p,*q;
    p=&x,q=&y;
    printf("enter two numbers");
    scanf("%d %d", &x, &y);
        if(*p>*q)
    {
        printf("%d is greater", x);
    }
    else
    printf("%d is greater", y);

}