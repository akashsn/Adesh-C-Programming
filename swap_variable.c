#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the value of a=%d & b=%d",a,b);
    
}