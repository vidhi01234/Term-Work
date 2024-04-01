#include <stdio.h>

int main()
{
    int a[10],i,j=0,k=0,n,ee=0,oo=0,e[10],o[10];
    printf("*****************INPUT******************\n");
    printf("Input the number of elements to be stored in the array:\n");
    scanf("%d",&n);
    printf ("Input %d elements in the array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           {
               e[j]=a[i];
               j++;
               ee++;
           }
       }
       else
       {
           {
               o[k]=a[i];
               k++;
               oo++;
              
           }
           
       }
    }
    printf("***************OUTPUT************\n");
    printf("The Even elements are:");
    for(i=0;i<ee;i++)
    {
        printf(" %d",e[i]);
    }
    printf("\nThe Odd elements are:");
    for(i=0;i<oo;i++)
    {
        printf(" %d",o[i]);
    }
    return 0;
}

/*
*****************INPUT******************
Input the number of elements to be stored in the array:5
Input 5 elements in the array:57
42
68
94
71
***************OUTPUT************
The Even elements are: 42 68 94
The Odd elements are: 57 71
*/
