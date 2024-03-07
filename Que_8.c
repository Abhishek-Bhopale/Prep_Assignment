#include <stdio.h>
struct student
{
    char name[50];
    char rollNo[50];
    int totalMarks;
};

void takeData(struct student *s)
{
    printf("Enter the student name - ");
    gets(s->name);
    printf("Enter the roll number - ");
    gets(s->rollNo);
    printf("Enter the total marks - ");
    scanf("%d",&s->totalMarks);
}

void readData(struct student *s)
{
    printf("\nStudent data : ");
    printf("\nName - %s",s->name);
    printf("\nRoll number - %s",s->rollNo);
    printf("\nTotal marks - %d",s->totalMarks);
}

int main()
{
    struct student abhi;
    
    takeData(&abhi);
    readData(&abhi);

    return 0;
}