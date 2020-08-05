#include <stdio.h>
#include <string.h> 
int main()
{
    char a[50];
    int i, b = 0;
 
    printf("Enter a string \n");
    scanf("%s",a);
    for (i = 0; a[i] != '\0'; i++)
    {
        b++;
    }
    printf(" the length of %s = %d\n", a, b);
}