#include <stdio.h>
int main()
{
    int *a,*b,x,y,i;
    printf("enter the value of x & y");
    scanf("%d%d",&x,&y);
    a=&x;
    b=&y;
    i=*a;
    *a=*b;
    *b=i;
    printf("after swaping x=%d\n y=%d\n",x,y);
}