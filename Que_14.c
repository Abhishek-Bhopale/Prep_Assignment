#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char str2[20];
    printf("Enter the string : ");
    gets(str);
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        if(i==len-1-i)
        {
            printf("String is palindrome\n");
            break;
        }
        else if(i-1==len-1-i)
        {
            printf("String is palindrome\n");
            break;
        }
        if(str[i] == str[len-i-1])
        {
            continue;
        }
        else
        {
            printf("String is not palindrome\n");
            break;
        }
    }

    return 0;
}