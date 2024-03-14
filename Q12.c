#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[10];
    printf("Enter the string : ");
    gets(str);
    printf("Original String : %s\n",str);
    
    printf("Reverse String : ");
    for(int i=strlen(str)-1; i>=0; i--)
        printf("%c",str[i]);
    
    return 0;
}