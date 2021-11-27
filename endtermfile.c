#include<stdio.h>
int main()
{
    FILE *p;
    char ch;
    int count;
    p = fopen("a.txt", "r");
    if(p==NULL)
    printf("the file doent exist");
    else
    {
        ch = getc(p);
        while(ch != EOF)
        {
            if(ch=='.' || ch=='?' || ch=='!')
            {
                count++;
            }
            ch = getc(p);
        }
    }
    printf("%d", count);
}