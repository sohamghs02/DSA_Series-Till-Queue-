#include<bits/stdc++.h>
using namespace std; 

int main(){    
    char str[100];
    cin.getline(str,100);
    for(int i=0; str[i]!='\0'; i++){
        str[i] = tolower(str[i]); // Convert to lowercase
    }
    int freq[256] = {0};    
    for(int i=0; str[i]!='\0'; i++){
        freq[str[i]]++;
    }
    for(int i=0; i<256; i++){
        if(freq[i] != 0){
            cout<<(char)i<<" = "<<freq[i]<<endl;
        }
    }
    return 0;
}