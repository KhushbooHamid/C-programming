#include<stdio.h>
int smallest(int x, int y)
{
    int z;
    if(x<y)
    z=x;
    else
    z=y;
    return z;
}
int main()
{
    int a=9,b=78,c;
    c = smallest(a,b);
    printf("%d", c);
}