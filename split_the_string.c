#include <stdio.h>
#include <string.h>
int main()
{
    char a[300];
    char b[300];
    int index,i=0,j=0,len;
    printf("enter the string:");
    scanf("%s",a);
    len=strlen(a);
    printf("enter the index:");
    scanf("%d",&index);
    if(index>=len)
    {
        printf("index is greater than length of the string");
    }
    else
    {
    while(i<=index)
    {
        b[j]=a[i];
        i++;
        j++;
    }
    printf("Given index string is:%s",b);
    }
}
