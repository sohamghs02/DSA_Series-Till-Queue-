#include <bits/stdc++.h>
using namespace std;

int countVowels(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    getline(cin, str);

    cout <<countVowels(str)<<endl;
    return 0;
}