#include<stdio.h>
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x=10,y=20;
    int *p,*q;
    p=&x;
    q=&y;
    swap(&x,&y);
   printf("%d %d",x,y );

}