#include <stdio.h>

void DecToBin(int n)
{
    int a[10];
    int i;
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n = n/2;
    }
    printf("Binary of given number is : ");
    for(i = i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

void DecToOct(int n)
{
    int oct[10];
    int i=0;
    while(n!=0)
    {
        oct[i] = n%8;
        n = n/8;
        i++;
    }

    printf("Octal of given number is : ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",oct[j]);
    }
    printf("\n");

}

void DecToHex(int n)
{
    int hex[10];
    int i=0;
    while(n!=0)
    {
        hex[i] = n%16;
        n = n/16;
        i++;
    }

    printf("Octal of given number is : ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",hex[j]);
    }
    printf("\n"); 
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    DecToBin(num);
    DecToOct(num);
    DecToHex(num);

    return 0;
}