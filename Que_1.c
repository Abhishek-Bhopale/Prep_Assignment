#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int max = -100;
    for(int i=1;i<argc;i++)
    {
        int a=atoi(argv[i]);
        if(a>max)
            max = a;
        
    }
    printf("The maximum number is : %d\n",max);

    return 0;
}