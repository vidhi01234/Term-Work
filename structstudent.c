#include <stdio.h>
typedef struct student
{
    int roll_no;
    char nm[40];
    char deprt[40];
    char course[50];
    int yoj;
}student;
void display(student s[],int);
void number(student s[],int);
int main()
{
    student s[450];
    int n,i;
    printf("*****************INPUT*************\n");
    printf("enter no. of student:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter details of roll no,name,department,course and year of joining of student:%d\n",i+1);
        scanf(" %d %[^\n] %[^\n]%s%d",&s[i].roll_no,s[i].nm,s[i].deprt,s[i].course,&s[i].yoj);
    }
    display(s,n);
    number(s,n);

    return 0;
}
void display(student s[],int n)
{
    int m,i;
    printf("enter year:");
    scanf("%d",&m);
    printf("**************OUTPUT************\n");
    for(i=0;i<n;i++)
    {
        if(s[i].yoj==m)
        {
           printf("Student name:%s\n",s[i].nm);
        }
    }
}
void number(student s[],int n)
{
    int a,i;
    printf("***************INPUT***********\n");
    printf("enter roll no:");
    scanf("%d",&a);
    printf("**************OUTPUT************\n");
    for(i=0;i<n;i++)
    {
        if(s[i].roll_no==a)
        {
            printf("Student name:%s",s[i].nm);
        }
    }
}
/*
*****************INPUT*************
enter no. of student:3
enter details of roll no,name,department,course and year of joining of student:1
12
Chandni
Medical
Veterinary
2004
enter details of roll no,name,department,course and year of joining of student:2
57
Noha
Food Department
Agriculture
2006
enter details of roll no,name,department,course and year of joining of student:3
14
Shailly 
CS
BTech
2004
enter year:2004
**************OUTPUT************
Student name:Chandni
Student name:Shailly
***************INPUT***********
enter roll no:57
**************OUTPUT************
Student name:Noha
*/
