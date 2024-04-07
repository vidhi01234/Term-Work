#include <stdio.h>

int main()
{
    char str[20];
    int i=0;
    puts("***************INPUT************");
    printf("Enter string\n");
    fgets(str,20,stdin);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            str[i]='\n';
        }
        i++;
    }
    puts("***************OUTPUT**********");
    puts("string after split by spaces:");
    puts(str);

    return 0;
}
/*
***************INPUT************
Enter string
this is fat cat
***************OUTPUT**********
string after split by spaces:
this
is
fat
cat
*/
