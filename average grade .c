#include<stdio.h>
 
int main()
{
    int python, c_programming, mathematics, physics, Total_marks;
    float aggregate_marks;
    printf("Enter the marks in python: ");
    printf("\nEnter the marks in c_programming: ");
    printf("\nEnter the marks of in mathematics: ");
    printf("\nEnter the marks physics: ");
    scanf("%d%d%d%d",&python, &c_programming, &mathematics, &physics);
    Total_marks = python+c_programming+mathematics+physics;
    printf("Total marks is: %d",Total_marks);
    aggregate_marks = Total_marks/4;
    printf("Aggregate marks is: %f",aggregate_marks);
if(aggregate_marks<0 || aggregate_marks>100)
    {
        printf("Wrong Entry");
    }
    else if(aggregate_marks>=40 && aggregate_marks<50)
    {
        printf("Grade Third division");
    }
    else if(aggregate_marks>=50 && aggregate_marks<60)
    {
        printf("Grade Second division");
    }
    else if(aggregate_marks>=60 && aggregate_marks<75)
    {
        printf("Grade First division");
    }
    else if(aggregate_marks>=75)
    {
        printf("Grade Distinction");
    }
    else if(aggregate_marks<40)
    {
        printf("Grade Fail");
    }
}

