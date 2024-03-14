#include<stdio.h>

void binary(int a);

int main(void)
{
    int n;

    printf("Enter Number : ");
    scanf("%d",&n);
    
    printf("Given Number : %d\n",n);
    binary(n);
    printf("\nOctal equivalent : %o",n);
    printf("\nHexal equivalent : %x",n);

    return 0;
}

void binary(int a)
{
    int i,arr[50];
    for (i=0; a > 0;i++)
    {
        arr[i] = a % 2;
        a = a/2;
    }

    printf("Binary equivalent : ");
    for(int j=i-1 ; j>=0 ; j--)
        printf("%d",arr[j]);
    
}