#include<stdio.h>
#include<string.h>

int main(void)
{
    int j=0,value=0;
    char str[10],str1[10];
    printf("Enter the string : ");
    gets(str);
    printf("Original String : %s\n",str);
    
    printf("Reverse String : ");
    for(int i=strlen(str)-1; i>=0; i--)
    {
        printf("%c",str[i]);
        str1[j]=str[i];
        j++;
    }
    str1[j] = '\0';

    value = strcmp(str,str1);
    if(value == 0)
    printf("\nplaindrome");
    else
        printf("\nnot plaindrome");
    
    return 0;
}