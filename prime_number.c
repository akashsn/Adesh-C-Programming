#include <stdio.h>
int main() 
{
    int a,b,i,j,flag=0;
    printf("enter the range");
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if (flag==0){
             printf("\nthe number is prime number=%d",i);
        }
       
    }
    ////////
   