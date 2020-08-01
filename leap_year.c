#include <stdio.h>
int main() 
{
    int a;
    printf("enter the year=\n");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("the given year is leap year");
    }
    else
    {
        printf("the given year is not leap year"); 
    }
}