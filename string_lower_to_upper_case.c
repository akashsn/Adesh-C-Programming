#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char x[30];
    printf("enter lower case:");
    scanf("%s",x);
    while(x[i]!='\0')
    {
        if(x[i]>='a' && x[i]<='z')
        {
            x[i]=x[i]-32;
        }
        i++;
    }
    printf("upper case:%s",x);
}