#include <stdio.h>

int main()
{
    int a[20][20],i,j,r,c,sum=0;
    printf("Enter rows and column\n");
    scanf("%d%d",&r,&c);
    puts("Enter elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    puts("matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>=j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of lower triangular %d",sum);
    return 0;
}

/*
Enter rows and column
3
3
Enter elements
1
0
2
0
4
0 
8
0
1
matrix:
102
040
801
sum of lower triangular 14
*/
