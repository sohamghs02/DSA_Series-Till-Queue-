#include<stdio.h>
int numberofDivisors(int num){
    int c = 0;
    for(int i=1; i<=num; i++){
        if(num%i == 0){
            c+=1;
        }
    }
    return c;
}
int countNumbers(int n){
    int c = 0;
    for(int i=1; i<=n; i++){
        if(numberofDivisors(i)==9)
            c+=1;
    }
    return c;
}
int main(){
    int num;
    printf("Enter the numbers: ");
    scanf("%d", &num);
    printf("%d", countNumbers(num));
    return 0;
}