
#include <stdio.h>
int main()
{
    int a[60],n,i,j,c;
    printf("enter the value of n=");
    scanf("%d",&n);
    printf("enter the number:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    printf("ascending order is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }   
}