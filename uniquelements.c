#include<stdio.h>
void uniqueElement(int[], int);
int main()
 {
  int n, a[100], i;
  printf("\n**********INPUT**********");
  printf("\nSpecify the number of elements to be stored in an array.\n");
  scanf("%d",&n);
  printf("\nInput array elements.\n");
  for(i=0; i<n; i++)
    scanf("%d",&a[i]); 
  uniqueElement(a,n);
  return 0;
 }

void uniqueElement(int A[], int l) 
 {
  int i, j, k, c;
  printf("\n**********OUTPUT**********");
  printf("\nThe unique elements found in the array are: ");
  for(i = 0; i < l; i++) 
   {
     c = 1;
     for(j = 0; j < l; j++) 
      {
       if(i != j && A[i] == A[j]) 
        {
         c = 0;
         break;
        }
      }
     if(c)  //c!=0
      { 
       printf("%d ", A[i]);
      }
   }
 }
/*
**********INPUT**********
Specify the number of elements to be stored in an array.
5

Input array elements.
5
4
2
4
5

**********OUTPUT**********
The unique elements found in the array are: 2 */
