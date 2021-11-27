#include<stdio.h>
int main()
{
    int arr[5]={1,5,9,7,3};
    int *p;
    
    
    int i;
    for(i=0;i<5;i++)
    printf("%d ", *(arr+i));
}