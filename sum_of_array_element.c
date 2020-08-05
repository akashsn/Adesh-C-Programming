#include <stdio.h>
int main()
{
    int size,sum=0;
    int a[size];
    printf("how many element you want to sum:");
    scanf("%d",&size);
    printf("enter the element:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum=%d",sum);
    
}