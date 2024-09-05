#include <iostream>
using namespace std;

int main(){
    int n,rem=0,s=0,o;
    cin>>n;
    o=n;
    while(o>0){
        rem=o%10;
        s=s+rem;
        o=o/10;
    }
    if(n%s==0){
        cout<<"harshad";
    }
    else{
        cout<<"not";
    }
    return 0;
}