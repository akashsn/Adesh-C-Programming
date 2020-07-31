#include <stdio.h>
int main()
{
    int a=0,b=1,c,size,i;
    printf("enter the range of fibonaaci number=\n");
    scanf("%d",&size);
    for(i=0;i<=size;i++)
    {
        c=a+b;
        printf("fibonaaci number=%d\n",c);
    a=b;
    b=c;
    }