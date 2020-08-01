#include <stdio.h>
int main() 
 {
    int n=0,y=0,z=0,c=0, a=0,i=0;
    printf("Enter an start:\n ");
    scanf("%d", &y);
    printf("enter the end:\n");
    scanf("%d",&z);
    for(i=y;i<=z;i++)
    {
    n=i;
    c=0;
    while (n>0) 
      {
        a = n % 10;
        c = c * 10 + a;
        n/=10;
      }
    if (i== c)
      {
        printf("%d is a palindrome\n", i);
      }
    }
}