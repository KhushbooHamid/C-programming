#include <stdio.h>
int main()
{
    int i, n, flag = 0;
    int arr[5] = {1, 7, 9, 8, 4};
    printf("enter the element to e searched");
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        if (n == arr[i])
        {
            flag = 1;
            printf("element found at %dth location", i + 1);
            break;
        }

     }
     if(flag==0)
     {
         printf("element not found");
     }
    
}