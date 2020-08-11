#include <stdio.h>
int main() 
{
    char d[100];
    char*a;
    int vcount=0,ccount=0;
    printf("enter the string:");
    scanf("%s",d);
    a=d;
    while(*a!='\0')
    {
    if(*a=='a'||*a=='e'||*a=='i'||*a=='o'||*a=='u'||*a=='A'||*a=='E'||*a=='I'||*a=='O'||*a=='U')
    {
    vcount++;
    }
    else
    {
        ccount++;
    }
    a++;
    }
    printf("number of vowels=%d\n",vcount);
    printf("number of consonant=%d\n",ccount);
}