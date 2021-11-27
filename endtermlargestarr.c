#include<stdio.h>
int main()
{
    int arr[4]={91,230,38,49};
    int i;
    for(i=0;i<4;i++)
    {
        if(arr[0]>arr[i])
        {
            arr[0]=arr[i];
        }
    }
      
    printf("the smallest element is %d", arr[0]);
}