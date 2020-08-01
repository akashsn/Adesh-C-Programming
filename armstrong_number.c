   #include <stdio.h>
int main()
{
    int a,b,c,original_value,sum=0;
    printf("enter the number");
    scanf("%d",&original_value);
    a=original_value;
    while(a>0)
    {
    b=a%10;
    sum+=b*b*b;
    c=a-b;
    a=c/10;
    }
    if(original_value==sum)
    {
        printf("%d is armstrong number",original_value);
    }
    else
    {
        printf("%d is not armstrong number",original_value);
    }
}