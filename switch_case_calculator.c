#include <stdio.h>
int add(int num1,int num2);
int sub(int num1,int num2);
int mul(int num1,int num2);
int div(int num1,int num2);
int main()
{
    int ch=0;
    int num1,num2,result=0;
    printf("select the operation:\n");
    printf("1.add\n");
    printf("2.sub\n");
    printf("3.mul\n");
    printf("4.div\n");
    scanf("%d",&ch);
    printf("enter num1 & num2\n");
    scanf("%d%d",&num1,&num2);
    switch(ch)
    {
        case 1:
        result=add(num1,num2);
        break;
        case 2:
        result=sub(num1,num2);
        break;
        case 3:
        result=mul(num1,num2);
        break;
        case 4:
        result=div(num1,num2);
        break;
        default:
        printf("invalid operation");
    }
    printf("result=%d",result);
    return 0;
}
int add(int num1,int num2)
{
    return num1+num2;
}
int sub(int num1,int num2)
{
    return num1-num2;
}
int mul(int num1,int num2)
{
    return num1*num2;
}
int div(int num1,int num2)
{
    return num1/num2;
}