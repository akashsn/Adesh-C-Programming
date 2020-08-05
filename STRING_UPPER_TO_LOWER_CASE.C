#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char x[30];
    printf("enter upper case:");
    scanf("%s",x);
    while(x[i]!='\0')
    {
        if(x[i]>='A' && x[i]<='Z')
        {
            x[i]=x[i]+32;
        }
        i++;
    }
    printf("lower case:%s",x);
}