#include <stdio.h>

int main(){
    int n, i, sum = 0;
    printf(" Please provide me the value for n:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf(" The sum n natural numbers is %d ", sum);

    

    return 0;
}