#include<stdio.h>
#include<string.h>

int main()
{
    char *str[] = {"mon", "tue","wed","thr","mon","wed"};
    
    int size = sizeof(str)/sizeof(str[0]);

    for(int i=0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(strcmp(str[i],str[j]) == 0 )
            {
                printf("Duplicate string : %s\n", str[i]);
                break;
            }
        }
    }

    return 0;
}