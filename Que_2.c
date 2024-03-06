#include <stdio.h>

int main()
{
    int n,result=1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        result = result * i;
    }

    printf("The factorial of %d is : %d",n,result);
    
    return 0;
}