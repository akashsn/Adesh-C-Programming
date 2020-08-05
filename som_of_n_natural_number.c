#include <stdio.h>
int main() 
{
    int a,b,sum=0,i;
    printf("'n' natural number you want to sum:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum+=i;
    }
    printf("the sum of natural number is:%d",sum);
}