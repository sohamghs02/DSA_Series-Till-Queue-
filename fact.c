#include<stdio.h>
int main(){
    int n, i, fact = 1;
    printf("Enter an Integer: ");
    scanf("%d",&n);
    if(n < 0){
        printf("error");
    }
    else{
        for(i = 1; i <= n; i++){
                fact = fact * i;
        }
        printf("Factorial is : %d", fact);
    }
    return 0;
}