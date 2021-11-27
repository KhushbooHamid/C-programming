#include<stdio.h>
int swap(int x, int y)
{
    int s;
    s=x;
    x=y;
    y=s;
    printf("%d %d", x,y);
}
int main()
{
    int a=10,b=20;
    swap(a,b);
    
}