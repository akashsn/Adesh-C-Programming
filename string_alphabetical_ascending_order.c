#include <stdio.h>
#include <string.h>
int main()
{
  char a[100],b;
  int i,j,l;
       printf("Input the string : ");
       scanf("%s",a);
  l=strlen(a);
  for(i=1;i<l;i++)
    for(j=0;j<l-i;j++)
	if(a[j]>a[j+1])
	{
	  b=a[j];
	  a[j] = a[j+1];
	  a[j+1]=b;
	}
   printf("sting ascending alphabetical order is:%s",a);
  }