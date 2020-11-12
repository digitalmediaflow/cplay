#include <stdio.h>

int main(){
double a, b, c; 
printf("Please enter the value for a:");
scanf("%lf" , &a);
printf("Please enter the value for b:");
scanf("%lf", &b);
printf("Please enter the value for c:");
scanf("%lf", &c);
if(a > b && c){
    printf("a has the value of %lf is the largest value", a);
if(b > a && c){
     printf("b has the value of %lf is the largest value", b);
}
if(c > a && b){
     printf("c has the value of %lf is the largest value", c);
}


    return 0;