#include<stdio.h>
int main(){
    int i , n;
    int t1 = 0, t2 = 1, nt;
    
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: %d %d", t1, t2);
    for(i = 2; i < n; ++i){
        nt = t1 + t2;
        printf(" %d", nt);
        t1 = t2;
        t2 = nt;
    }
    return 0;
}