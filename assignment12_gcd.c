#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main() {
   int num1,num2;
   num1=12;
   num2=18;
   int gcd=1;
   int min_num;
   if(num1>num2){
       min_num=num2;
   }else{
       min_num=num1;
   }
   for(int i=1;i<=min_num;i++){
       if(num1%i==0 && num2%i==0){
           gcd=i;
       }
   }
   printf("%d",gcd);

    return 0;
}