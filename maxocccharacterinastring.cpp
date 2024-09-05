#include<iostream>
using namespace std;

char getMaxOccCharacters(string s){
    int arr[26] = {0};
    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];        
        int number = 0;
        //lowercase        
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';            
        }
        else{//uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }
    //find maximum occ character
    int maxi = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}

int main(){
    string name;
    cout<<"Enter Your Name: "<<endl;
    cin>>name;
    
    cout <<"String with maximum Occurence is : "<<getMaxOccCharacters(name) << endl;
}