#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter first number=\n");
    scanf("%d",&num1);
    printf("enter second number=\n");
    scanf("%d",&num2);
    printf("enter third number=\n");
    scanf("%d",&num3);
    printf("%d%d%d",num1,num2,num3);
    if((num1>num2) && (num1>num3))
    {
        printf("greater number is=%d",num1);
    }
    else if ((num2>num1) && (num2>num3))
    {
        printf("greater number is=%d",num2);
    }
    else
    {
        printf("the greater number is=%d",num3);
    }
}