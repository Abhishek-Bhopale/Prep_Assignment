#include <stdio.h>

int main()
{
    int first=0,second = 1,fib = 0,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    if(n==0)
    {
        printf("The %d term of fibonacci series is : %d",n,first);
        return 0;
    }
    else if(n==1)
    {
        printf("The %d term of fibonacci series is : %d",n,second);
        return 0;
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            fib = first + second;
            first = second;
            second = fib;
        }
    }

    printf("The %d term of fibonacci series is : %d",n,fib);

    return 0;
}