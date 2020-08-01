#include <stdio.h>
int main() 
 {
    int n, c = 0, a, original_value;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original_value = n;
    while (n >0) 
    {
        a = n % 10;
        c = c * 10 + a;
        n /= 10;
    }
    if (original_value == c)
    {
        printf("%d is a palindrome.", original_value);
    }    
    else
    {
        printf("%d is not a palindrome.", original_value);
    }    
}