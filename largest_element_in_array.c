#include <stdio.h>
int main()
{
    int b,i;
    int a[5]={1,2,3,4,5};
    b=a[0];
    for(i=0;i<5;i++)
    {
        if(b<a[i])
        b=a[i];
    }
    printf("largest element is%d",b);
}