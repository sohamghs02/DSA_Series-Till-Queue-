#include<stdio.h>
int main(){
    int n, rev = 0, rem, o;
    printf("Enter an integer: ");
    scanf("%d",&n);
    o = n;
    while(n!=0){
        rem = n % 10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(o == rev)
    printf("%d is a Palindrome Number", o);
    else
    printf("Not Palindrome");
    return 0;
}