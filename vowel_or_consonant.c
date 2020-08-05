#include <stdio.h>
int main() 
{
    char d;
    char a,e,i,o,u,A,E,I,O,U;
    printf("enter the alphabet:");
    scanf("%c",&d);
    if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U')
    {
    printf("%c is vowel",d);
    }
    else
    {
        printf("%c is consonant",d);
    }
}