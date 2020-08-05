#include <stdio.h>
int main()
{
    int size;
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    {
        size=sizeof (a)/sizeof a[10];
    }
    printf("number of element is %d",size);
    
}