#include<stdio.h>
#include<math.h>
void main(){
    int binary_num;;
    printf("Enter a binary number : ");
    scanf("%d",&binary_num);
    int dec=0;
    int m=0;
    int n=binary_num;
    while(binary_num>0){
        binary_num=binary_num/10;
        dec=dec+binary_num*pow(2,m);
        n=n/10;
        m++;
        binary_num=n;
    }
    printf("decimal number = %d",dec);
}