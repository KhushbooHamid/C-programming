#include<stdio.h>
int series(int a, int b, int c)
{
    int d;
    d = a+b+c;
    return d;
}
int main()
{
    int e,f,g,h;
    e=1/1,f=2/2,g=3*2/3,h;
    h=series(e,f,g);
    printf("%d", h);
}