#include <stdio.h> 

int main(){
int a, b, c;
printf("Please provide the first side of the triangle:");
scanf("%d", &a);

printf("Please provide the second side of the triangle:");
scanf("%d", &b);

printf("Please provide the third side of the triangle:");
scanf("%d", &c);
if(b + c > a || a + b > c || a + c > b)
{
  printf(" You have a triangle");

    if( a == c && a == b)
    {
        printf(" This is an equaliterial triangle");
    }
    else{
            printf(" This is NOT an equaliterial triangle");
    }


}
else {
        printf(" This is NOT a triangle");
}




   return 0; 
}

