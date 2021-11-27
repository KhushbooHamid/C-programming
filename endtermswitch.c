#include<stdio.h>
int main()
{
    float max_marks ;
    int percentage,marks;
    printf("enter the marks 0-500");
    scanf("%d", &marks);
    printf("enter the maximum marks");
    scanf("%f", &max_marks);

    
    switch(marks)
    {
        case 400 ... 500:
        
        {
            printf("distinction");
        }
        break;
        case 300 ... 399:
        
        printf("first division");
        
        break;
        case 200 ... 299:
       
        {
        
            printf("second division");
            break;
        }
    }
}