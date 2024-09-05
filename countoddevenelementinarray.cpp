#include<iostream>
using namespace std;

int main(){
    int arr[100], n;
    int evencount=0, oddcount=0;
    cout<<"Enter Size of array:"<<endl;
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    cout<<"Even Elements count : "<<evencount<<endl;
    cout<<"Odd Elements count : "<<oddcount<<endl;
}