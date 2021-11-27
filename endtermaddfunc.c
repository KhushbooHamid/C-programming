#include<stdio.h>
int add(int x, int y, int z)
{
    int s;
    s = x+y+z;
    return s;
}
int main()
{
    int a=10,b=20,c=30,d;
    d = add(a,b,c);
    printf("%d", d);
}