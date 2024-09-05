#include<bits/stdc++.h>
using namespace std;
int main()
{       
    int n1,n2;
    n1=1;
    n2=1;
    int result = 0;
    int n;
    cin>>n;
    if(n==0){
        result=0;
    }
    else if(n==1){
        result=1;
    }
    else{
        for(int i=0;i<n-2;i++){
            result=n1+n2;
            n1=n2;
            n2=result;
        }
    }
    cout<<result;
}