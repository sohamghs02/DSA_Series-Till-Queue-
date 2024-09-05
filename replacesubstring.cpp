#include<bits/stdc++.h>
using namespace std;

string replacesubstr(string str, string sub, string rep){
    int pos = 0;
    while((pos = str.find(sub, pos)) != string::npos){
        str.replace(pos, sub.length(), rep);
        pos += rep.length();
    }
    return str;
}

int main() {
    string str,substr,replace,output;
    getline(cin, str);
    getline(cin, substr);
    getline(cin, replace);
    output = replacesubstr(str, substr, replace);
    cout<<output<<endl;
    return 0;
}