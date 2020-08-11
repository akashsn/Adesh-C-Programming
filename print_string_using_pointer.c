#include <stdio.h>
int main()
{
    char a[300];
    char*b;
    printf("enter the string\n");
    scanf("%s",a);
    b=a;
    while(*b!='\0')
    printf("%c",*b++);
}