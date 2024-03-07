#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if(ch>=48 && ch<=57)
    {
        printf("It is NUMBER");
    }
    else if (ch>=65 && ch<=90)
    {
        printf("It is UPPERCASE CHARACTER");
    }
    else if (ch>=97 && ch<=122)
    {
        printf("It is LOWERCASE CHARACTER");
    }
    else
    {
        printf("It is OTHER CHARACTER");
    }
    
    

    return 0;
}