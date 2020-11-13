#include <stdio.h>
// C Program to Generate Multiplication Table**if the input 
//is 5 then you will print 
//like 5*1=5,5*2=10 etc.

int main(){
    int n, i; 
    printf("What is the number for the multiplication table\n:");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++)
    {
      printf("%d * %d = %d \n", n,i,n*i);
    }
     












    return 0;
}