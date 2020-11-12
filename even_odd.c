#include <stdio.h>
int main(){
int a; 
printf("Please provide your input");
scanf("%d", &a);
if(a % 2 == 0)
{
    printf("Your number %d is an EVEN number", a);
}
if(a % 3 == 0)
{
    printf("Your number %d is an ODD number", a);
}
else
{
     printf("You entered an INVALID input");
  
}


    return 0;
}