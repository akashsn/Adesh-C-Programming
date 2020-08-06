#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  char c[100];
  int i=0,j,k=0,len2=0;
  printf("enter the word");
  scanf("%s",a);
  j=strlen(a)-1;
  while(len2<a[j])
  {
      c[k]=a[j];
      j--;
      k++;
  }
  printf("the revers is:%s",c);
 }