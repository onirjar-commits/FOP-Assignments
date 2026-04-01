#include <stdio.h>
float add(float a , float b);
float multiply(float a , float b);
float sub(float a,float b);
float division(float a , float b);
float fact(float a);    

int main() {
    float a,b;
    int choice;
    printf("enter no. a :");
    scanf("%f",&a);
    printf("enter no. b :");
    scanf("%f",&b);
    printf("Enter operation to be performed :\n (1-Addition) \n (2-Subtraction) \n (3-multiplication) \n (4-Divison) \n (5-Factorial of a)\n");
    scanf("%d",&choice);
    switch(choice){
        case 1 : 
         add(a,b);
         break;
        case 2 : 
         sub(a,b);
         break;
        case 3 : 
         multiply(a,b);
         break;
        case 4 : 
         division(a,b);
         break;
        case 5 : 
         fact(a);
         break; 
        default :
         printf("invalid choice");
         break;
    }
    return 0;
}

float add(float a , float b){
    printf("Addition is %f",a+b);
}

float sub(float a , float b){
    printf("Subtraction  is %f",a-b);
}
float multiply(float a , float b){
    printf("multiplication  is %f",a*b);
}
float division(float a , float b){
    printf("division is %f",a/b);
}

float fact(float a){
    float fact=1;
    for(float i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("factorial of %f is %f",a,fact);
}