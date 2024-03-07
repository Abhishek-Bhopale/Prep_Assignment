#include <stdio.h>
#include <string.h>

int main()
{
    char *arr[] = {"Abhi","Puneet","Rushi","Mahesh","Hemant","Aarya"};
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i=1;i<length;i++)
    {
        if(strcmp(arr[0],arr[i]) == 0)
        {
            printf("\"%s\" This string is duplicated\n",arr[i]);
            return 0;
        }
    }
    printf("No string is duplicated\n");

    return 0;
}
