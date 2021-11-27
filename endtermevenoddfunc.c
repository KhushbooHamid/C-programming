#include<stdio.h>
int evenodd(int x)
{
    int z,even,odd;
    if(x%2==0)
    x=even;
    else
    x=odd;
    return x;
}
int main()
{
    int a,n;
    printf("enter a number");
    scanf("%d", &n);
    
    if(evenodd(n))
    {
        printf("the number is even");
    }
    else
    printf("the number is odd");
    
}