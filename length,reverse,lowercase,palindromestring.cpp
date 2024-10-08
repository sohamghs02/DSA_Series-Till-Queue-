#include<iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;
    while(s<=e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n) {
    int s=0;
    int e = n-1;
    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != 0; i++){
        count++;
    }
    return count;
}

int main(){
    char name[10];
    cout<<"Enter Your Name: "<<endl;
    cin>>name;
    cout<<"Your Name is: ";
    cout<<name<<endl;
    int len = getLength(name);
    //reverse(name, len);
  
    //cout<<"Your Name After Reverse is: "<<name <<endl;
    cout <<" Palindrome or Not: " << checkPalindrome(name, len) << endl;

}