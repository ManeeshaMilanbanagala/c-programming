#include<stdio.h>
int main()
{
    int s_id;
    char s_name;
    char grade;
    int marks;

    printf("Enter your student ID\n");
    scanf("%d",&s_id);

    printf("Enter your student name\n");
    scanf("%s",&s_name);

    printf("Enter the your marks\n");
    scanf("%d",&marks);

    if(marks>=75){
        printf("Your grade is:A");
    }
    else if (marks>=65)
    {
        printf("Your grade is:B");
    }
    else if (marks>=50)
    {
        printf("Your grade is:C");
    }
    else{
        printf("Your are fail");
    }
    
    return 0;

}