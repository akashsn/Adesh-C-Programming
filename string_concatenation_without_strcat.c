#include <stdio.h>
#include <string.h>
int main()
{
    char a[30]="hello";
    char b[30]="world";
    int l1,l2,i;
    l1=strlen(a);
    printf("l1=%d\n",l1);
    l2=strlen(b);
    printf("l2=%d\n",l2);
    for(i=0;i<=l2;i++)
    {
        a[l1+i]=b[i];
    }
    printf("concatenation string is: %s",a);
}