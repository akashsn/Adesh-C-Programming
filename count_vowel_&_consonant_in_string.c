#include <stdio.h>
#include <string.h>
int main() 
{
    char d[100],j;
    int i=0;
    int vcount=0,ccount=0;
    printf("enter the string:");
    scanf("%s",d);
    i=strlen(d)-1;
    while(j<=i)
    {
    if(d[j]=='a'||d[j]=='e'||d[j]=='i'||d[j]=='o'||d[j]=='u'||d[j]=='A'||d[j]=='E'||d[j]=='I'||d[j]=='O'||d[j]=='U')
    {
    vcount++;
    }
    else
    {
        ccount++;
    }
    j++;
    }
    printf("number of vowels=%d\n",vcount);
    printf("number of consonant=%d\n",ccount);
}