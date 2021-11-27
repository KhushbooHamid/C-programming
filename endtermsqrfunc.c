#include<stdio.h>
int sqr(int x)
{
    int s;
    s = x*x;
    return s;
}
int main()
{
    int a=20,b;
    b = sqr(a);
    printf("%d", b);
}