#include<stdio.h>
int main(){
    int n, rem, i, sum = 0;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i = 1; i <= (n-1); i++){
        rem = n%i;
        if(rem == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        printf("%d is a Perfect Number",n);
    }
    else{
        printf("not Perfect Number");
    }
    return 0;
}