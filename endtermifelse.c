#include<stdio.h>
int main()
{
    float marks, max_marks, percentage;
    printf("enter marks of student");
    scanf("%f", &marks);
    printf("enter maximum marks");
    scanf("%f", &max_marks);
    percentage= (marks/max_marks)*100;
    if(percentage>=75)
    {
        printf("you have got distinction");
    }
      if(percentage<75 && percentage>60)
    {
        printf("you have got first division");
    }
    else if(percentage<60 && percentage>50)
    printf("you have got second division");
    else if(percentage<50 && percentage>40)
    printf("you have got third division");
    else if(percentage<40)
    printf("FAIL");

}