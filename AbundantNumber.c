#include<stdio.h>
#include<math.h>
int main(){
    int n , sum =0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i = 1; i < sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i)
            sum = sum + i;
            {
                sum = sum + i;
                sum = sum + (n/i);
            }
        }
    }
    sum = sum - n;
    if(sum > n)
    printf("Abundant Number");
    else
    printf("not an Abundant Number");
}