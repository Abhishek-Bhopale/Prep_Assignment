#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s1[100];
    printf("Enter the string : ");
    gets(s1);
    int length = strlen(s1);
    int length2 = strlen(str);
    for(int i=0;i<length2;i++)
    {
        int count=0;
        for(int j=0;j<length;j++)
        {
            if(str[i] == s1[j])
            {
                count++;
            }
            else if(str[i]+32 == s1[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("%c = %d\n",str[i],count);
        }
    }

    return 0;
}