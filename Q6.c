#include<stdio.h>

int main(void)
{
    int i,j,k,r,c,m,n,result = 0;
    int a[12][12], b[12][12], res[12][12];
    
    printf(" Enter number of row and column of 1st matrix \n");
    scanf("%d%d",&r,&c);
    printf("Enter matrix elements : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf(" Enter number of row and column of 2nd matrix \n");
    scanf("%d%d",&m,&n);

    if(c != m)
    {
        printf(" Matrix multiplication not possible \n");
    }
    else 
    {
        printf("Enter matrix elements : \n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        for(i=0; i<r; i++)
        {
            for(j=0; j<n; j++)
            {
                for(k=0; k<c; k++)
                {
                    result = result + a[i][k] * b[k][j] ;
                }
                res[i][j] = result;
                result = 0;
            }
        }

        printf("Result matrix : \n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d   ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}