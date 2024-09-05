#include <bits/stdc++.h>
using namespace std;

string removeSpaces(string str){
    string result = "";
    for(char c : str){
        if(c != ' '){
            result += c;
        }
    }
    return result;
}

int main(){
    string str;    
    getline(cin, str);
    
    cout<<removeSpaces(str)<<endl;
    return 0;
}