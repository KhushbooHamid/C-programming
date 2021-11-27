#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter two numbers");
    scanf("%d %d", &x,&y);
    //(x>y)?printf("%d is greater than %d", x,y):printf("%d is greater than %d", y,x);
    z=x>y?x:y;
    printf("%d",z);
}