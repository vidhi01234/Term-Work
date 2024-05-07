#include <stdio.h>
int main()
{
    int a[30],i,n,t,j,m,*p;
    printf("Enter range:");
    scanf("%d",&n);
    p=(int)malloc(n* sizeof(int));
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("enter index:");
    scanf("%d",&m);
    for(i=m,j=n-1;i<j;i++,j--)
    {
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
    }
    printf("enter final array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }

    return 0;
}
/*
Enter range:8
Enter elements:
1
2
3
4
5
6
7
8
enter index:4
enter final array:
1       2       3       4       8       7       6       5
*/
