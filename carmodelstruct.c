#include <stdio.h>
typedef struct car
{
    char car_no[40];
    char model_nm[40];
    int rate;
}car;

int main()
{
    car c[50];
    int i,d,n;
    printf("enter the records input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the model num ,model name,rental rate of %d:\n",i+1);
        scanf(" %[^\n] %[^\n] %d",c[i].car_no,c[i].model_nm,&c[i].rate);
    }
    printf("enter the no of days: ");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        c[i].rate=d*c[i].rate;
    }
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%d\n",c[i].car_no,c[i].model_nm,c[i].rate);
    }

    return 0;
}
/*enter the records input:3
enter the model num ,model name,rental rate of 1:
UP32VS0001
Mersedes Benz
20000
enter the model num ,model name,rental rate of 2:
UP32VS0007
1964 Ford Mustang
50000
enter the model num ,model name,rental rate of 3:
UP32VS0002
G Wagon
100000
enter the no of days: 5
UP32VS0001      Mersedes Benz       100000
UP32VS0007      1964 Ford Mustang    250000
UP32VS0002      G Wagon             500000
*/
