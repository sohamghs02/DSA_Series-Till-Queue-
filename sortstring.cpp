#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

/*void sortString(string& str){
    sort(str.begin(), str.end());
}*/

//simple bubble sort
void sortString(string& str){
    int n = str.length();
    for(int i=1; i<n; i++){
        bool swapped=false;
        for(int j=0; j<n-i; j++){
            if(toLowerCase(str[j]) > toLowerCase(str[j + 1])) {
                swap(str[j], str[j + 1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

int main(){
    string str;    
    getline(cin, str);
    
    sortString(str);
    cout<<str<<endl;
    return 0;
}