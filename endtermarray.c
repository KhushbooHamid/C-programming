#include<stdio.h>
int main()
{
    int i,n;
    int arr[100];
    printf("enter the number of terms");
    scanf("%d", &n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
}