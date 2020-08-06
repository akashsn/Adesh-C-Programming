#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    int len,i=0,b;
    printf("enter the word:");
    scanf("%s",a);
    len=strlen(a)-1;
    while(i<=len)
    {
    b=a[i];
    a[i]=a[len];
    a[len]=b;
    i++;
    len--;
    }
    printf("reverse=%s",a);
}