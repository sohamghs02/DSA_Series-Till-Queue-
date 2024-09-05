#include<stdio.h>
int main(){
    int temp , square, count = 1, num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    temp = num;
    square = num * num;
    while(num != 0){
        count = count * 10;
        num = num/10;
    }
    if(square % count == temp)
    printf("Automorphic Number");
    else
    printf("not an Automorphic Number");
}