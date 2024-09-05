#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
   int o,rem=0,t=0,res=0;
   o=n;
   while (o!=0) {
      o/=10;
      t++;
   }
   o=n;
   while (o!=0) {
      rem = o%10;
      res+=pow(rem,t);
      o/=10;
   }
   if (res==n)
      return 1;
   else
      return 0;
}

bool isPrime(int n){
    if(n < 2)
        return 0;
    for(int i = 2;i < n; i++) 
    { 
        if(n % i == 0) 
            return 0;
    }
    return 1;
}

int main(){
    int l,u;
    cin>>l;
    cin>>u;
    cout<<endl;
    cout<<"armstrong numbers: ";
    for(int i=l; i<=u; i++){
        if(isArmstrong(i))
            cout << i << " ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"prime numbers: ";
    for(int i=l; i<=u; i++){
        if(isPrime(i))
            cout << i << " ";
    }
    return 0;
}