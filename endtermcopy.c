#include<stdio.h>
#include<string.h>
int main()
{
   char a1[5]="IU";
   char a2[5]="ST";
   char a3[5];
   puts(a1);
   puts(a2);
   int i,j;
   for(i=0;a1[i]!='\0';i++)
   {
       a3[i]=a1[i];
   }
    for(j=0;a2[j]!='\0';j++)
    {
        a3[i]=a2[j];
        i++;
    }
    a3[i]='\0';
    puts(a3);
    return 0;
}