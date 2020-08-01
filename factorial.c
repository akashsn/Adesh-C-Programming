#include <stdio.h>
int main() 
{
    int a=1,i,num,c;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        c=a*i;
        a=c;
    }
    printf("factorial number is=%d",c);
}