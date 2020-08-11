#include <stdio.h>
int main()
{
    int *a,*b,*c,x,y,z;
    printf("enter the value of x,y & z");
    scanf("%d%d%d",&x,&y,&z);
    a=&x;
    b=&y;
    c=&z;
    if((*a>*b) && (*a>*c))
    {
        printf("%d is largest number",x);
    }
    else if((*b>*a) && (*b>*c))
    {
        printf("%d is largest number",y);
    }
    else
    {
        printf("%d is largest number",z);
    }
}