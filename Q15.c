#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[100];
    int i, count[26]={0};

    printf("Input : ");
    fgets(str, sizeof(str), stdin);

    for(i=0; i<strlen(str);i++)
    {
        if(str[i]>= 'a' && str[i]<= 'z')
        {
            count[str[i]-'a']++;
        }

        if(str[i]>= 'A' && str[i]<= 'Z')
        {
            count[str[i]-'A']++;
        }
    }

    printf("Output : \n");
    for(i=0;i<26;i++)
    {
        if(count[i] != 0)
        {
            char output = 'A' + i ;
            printf("%c : %d\n",output,count[i]);
        }
    }

    return 0;
}