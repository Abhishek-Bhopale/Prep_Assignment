#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter the string : ");
    gets(str);
    int n = strlen(str);
    printf("The reverse order of string : ");
    for(int i=n;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}