#include <stdio.h>
#include <stdlib.h>

void table(int num)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}

int main(int argc,char *argv[])
{
    int a = atoi(argv[1]);
    table(a);

    return 0;
}