#include<stdio.h>
struct student
{
    int rollno;
    char name[50];
    float marks;
};
int main()
{
    int i;
    struct student s[i];
    printf("enter the rollno, name, marks ");
    for(i=0;i<3;i++)
    scanf("%d %s %f", &s[i].rollno, &s[i].name, &s[i].marks);
    for(i=0;i<3;i++)
    printf("%d %s %f", s[i].rollno, s[i].name, s[i].marks);

}