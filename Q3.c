#include <stdio.h>

int main(void)

{

    int num, a=-1, b=1, c;

    printf("Enter a number: ");

    scanf("%d",&num);

    printf("Fibonacci series: ");

    for(int i=0;i<num;i++)

    {

        c=a+b;

        printf("%d, ",c);

        a=b;

        b=c;

    }

    return 0;

}
