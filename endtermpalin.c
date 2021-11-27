#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char *p;
    char *q;
    char s[10];
    p=s;
    printf("enter ");
    scanf("%c", &s);
   
    q=p;
    int flag=0;
    while(*q!='\0')
    {
        q++;
    }
    q--;
    while(q!=p)
    {
        if(*p!=*q)
        {
            flag==1;
            printf("not  a paindrome");
             break;
        }
        
       
        p++;
        q--;
    }
    if(flag==0)
    printf("palindrome");
    
    

}