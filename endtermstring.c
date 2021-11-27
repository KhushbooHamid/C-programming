#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50];
    printf("enter the string");
    gets(arr);
    puts(arr);
    int l,i;
    for(i=0;arr[i]!='\0';i++);
    {
        printf("%d", i);
    }
}