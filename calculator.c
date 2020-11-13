#include <stdio.h>

int main(){
int n1, n2, add, subtract, divide, modolos;
printf("What is your first number\n");
scanf("%d",n1);


printf("What is your second number\n");
scanf("%d",n2);



printf("Which operations do you want to do\n type add or subtract or divide or modolos");
scanf("d%  d% d%  d% ", &add, &subtract, &divide, &modolos);
if(add)
{
    printf("%d + %d", n1,n2);
}
if(subtract)
{
    printf("%d - %d", n1,n2);
}
if(divide)
{
    printf("%d / %d", n1,n2);
}
if(modolos)
{
    printf("%d % %d", n1,n2);
}





    return 0;
}