#include <stdio.h>

int main(){
 int n, i, factorial = 1;
 printf("Please provide me the value of n:\n");
 scanf("%d", &n);
 for( i = 1; i <= n; i++)
 {
    factorial = i * factorial;
 }
 printf("The factorial of %d is %d", n, factorial );
 






    return 0;
}