#include<stdio.h>
int main(){
    int i, org, num, lastd, sum;
    long fact;
    printf("Enter Number: ");
    scanf("%d",&num);
    org = num;
    sum = 0;
    while(num > 0){
        lastd = num%10;
        fact = 1;
        for(i = 1; i <= lastd; i++){
            fact = fact*i;
        }
        sum = sum + fact;
        num = num/10;
    }
    if(sum == org){
        printf("%d is a Strong Number",org);
    }
    else{
        printf("not Strong Number");
    }
    return 0;
}