#include <iostream>
using namespace std;
int main() {
  int n1,n2,gcd,lcm,rem,num,den;
  cout<<"Enter two numbers:";
  cin>>n1>>n2;
  num = (n1>n2)?n1:n2;
  den = (n1<n2)?n1:n2;
  rem = num % den;
  while(rem!=0){
    num = den;
    den = rem;
    rem = num % den;
  }
  gcd = den;
  lcm = n1*n2/gcd;
  cout<<"GCD of "<<n1<<" and "<<n2<<" is: "<<gcd<<endl;
  cout<<"LCM of "<<n1<<" and "<<n2<<" is: "<<lcm<<endl;
}