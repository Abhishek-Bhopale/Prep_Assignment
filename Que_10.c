//NOT COMPLETED YET
#include <stdio.h>
#include <stdlib.h>

char nameOfStudents[10][50];

char cmpfunc(const void *a,const void *b)
{
    return (*(char*)a - *(char*)b);
}

int main()
{
    printf("Enter the name of students : \n");
    for(int i=0;i<10;i++)
    {
        gets(nameOfStudents[i]);
    }
    
    qsort(nameOfStudents,10,sizeof(char),cmpfunc);

    printf("After sorting : \n");
    for(int i=0;i<10;i++)
    {
        printf("%s\n",nameOfStudents[i]);
    }


    return 0;
}