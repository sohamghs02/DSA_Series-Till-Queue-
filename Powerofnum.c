#include<stdio.h>
int main(){
    int base, exp;
    double result = 1.0;
    printf("Enter Base Number: ");
    scanf("%d",&base);
    printf("Enter Exponent: ");
    scanf("%d",&exp);
    while(exp != 0){
        result*= base;
        --exp;
    }
    printf("Answer = %f", result);
    return 0;
}