#include<stdio.h>
int prime(int n)
{
    int i,flag=0;
  
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            printf("not prime");
            break;
        }

    }
    if(flag==0)
    {
        printf("prime");
        
    }
      if(n==1)
    printf("neither prime nor composite");
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    prime(n);
}