#include <stdio.h>
int main()
{
    int a[20][20],i,j,r,c,max;
    puts("**************INPUT***************");
    printf("enter rows and column\n");
    scanf("%d%d",&r,&c);
    puts("enter elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    puts("The given array is:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("*************OUTPUT***********\n");
    for(i=0;i<r;i++)
    {
        max=0;
        for(j=0;j<c;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
        printf("Max in row %d is %d \n",i+1,max);
    }
    
    return 0;
}
/*
**************INPUT***************
enter rows and column
3
3
enter elements:
7
5
1
4
8
2
9
6
3
The given array is:
751
482
963
*************OUTPUT***********
Max in row 1 is 7 
Max in row 2 is 8 
Max in row 3 is 9 
*/
