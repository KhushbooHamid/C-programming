#include<stdio.h>
int main()
{
    int arr[3][3]={1,3,5,7,9,8,6,4,2};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("the second matrix is\n");

    int arr2[3][3]={2,1,4,3,6,5,8,7,9};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("the addition is:\n");
    int arr3[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr3[i][j]=arr[i][j]+arr2[i][j];
           
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

}