#include <stdio.h>

int main()
{
    int sub1,sub2,sub3,sub4,sub5,Total_marks;
    printf("Enter the marks of SUBJECT 1 : ");
    scanf("%d",&sub1);
    printf("Enter the marks of SUBJECT 2 : ");
    scanf("%d",&sub2);
    printf("Enter the marks of SUBJECT 3 : ");
    scanf("%d",&sub3);
    printf("Enter the marks of SUBJECT 4 : ");
    scanf("%d",&sub4);
    printf("Enter the marks of SUBJECT 5 : ");
    scanf("%d",&sub5);

    Total_marks = sub1+sub2+sub3+sub4+sub5;
    
    if(Total_marks >= 90)
    {
        printf("Grade : Ex");
    }
    else if (90>Total_marks && Total_marks>=80)
    {
        printf("Grade : A");
    }
    else if (80>Total_marks && Total_marks>=70)
    {
        printf("Grade : B");
    }
    else if (70>Total_marks && Total_marks>=60)
    {
        printf("Grade : C");
    }
    else if (60>Total_marks)
    {
        printf("Grade : F");
    }
    
    return 0;
}