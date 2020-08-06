#include <stdio.h>
#include <string.h>
int main()
{
    char a[300];
    int len,i=0,count=0;
    char b;
    printf("enter the word:");
    scanf("%s",a);
    len=strlen(a)-1;
    printf("enter which alphabet you want to count:");
    scanf(" %c", &b);
    for(i=0;i<len;i++)
    {
        if(b==a[i])
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("count=%d",count);
    }
    else
    {
        printf("count=0");
    }
}
