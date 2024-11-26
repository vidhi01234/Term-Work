#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
  int data;
  struct list* next;
}list;

list* insert(list*);
void display(list*);
void delete_sec(list**);

int main()
{
  int ch;
  list *f=NULL,*r=NULL;
  do
  {
    printf("\n1.Insert\n2.Display\n3.Delete second minimun");
    printf("\nEnter choices:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
         r=insert(r);
         if(f==NULL)
            f=r;
         break;
      case 2:
         display(f);
         break;
      case 3:
        delete_sec(&f);
        break;
    }
  }while(ch<4);
  return 0;
}

list* insert(list*r)
{
  list* p=NULL;
  p=(list*) malloc(sizeof(list));
  if(p!=NULL)
  {
    printf("Enter data:");
    scanf("%d",&p->data);
    if(r==NULL)
      r=p;
    else
    {
      r->next=p;
      r=p;
    }
    r->next=NULL;
  }
  return r;
}

void display(list *f)
{
  if(f==NULL)
     return;
  else
  {
    while(f!=NULL)
    {
      printf("%d ",f->data);
      f=f->next;
     }
   }
}
void delete_sec(list** head)
{
    if(*head==NULL || (*head)->next==NULL)
    {
        return;
    }
    list *temp = *head,*prev=NULL;
    list *firstMin=NULL,*secondMin=NULL;
    list *secondMinPrev=NULL;
    while (temp != NULL) {
        if (firstMin == NULL || temp->data < firstMin->data)
        {
            secondMin = firstMin;
            secondMinPrev = prev;
            firstMin = temp;
        }
        else if (secondMin == NULL || (temp->data > firstMin->data && temp->data < secondMin->data))
        {
            secondMin = temp;
            secondMinPrev = prev;
        }
        prev = temp;
        temp = temp->next;
    }
    if (secondMin == NULL)
    {
        printf("No second minimum value in the list.\n");
        return;
    }
    if (secondMinPrev != NULL)
    {
        secondMinPrev->next = secondMin->next;
    }
    else
    {
        *head = secondMin->next;
    }
    printf("Deleted node with second minimum value: %d\n", secondMin->data);
    free(secondMin);
}
