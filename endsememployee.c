#include<stdio.h>
struct employee
{
    int id;
    float salary;
    char name[50];
};
int main()
{
    int i;
    struct employee e[i];
    printf("enter the id, salary, name of empoyees ");
    for(i=1;i<=30;i++)
    {
        scanf("%d %f %s", &e[i].id, &e[i].salary, &e[i].name);
    }
    for(i=1;i<=30;i++)
    {
         printf("%d %f %s", e[i].id, e[i].salary, e[i].name);
    }

}