#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    int i,sum = 0;
    cin>>str;
    for (i= 0; str[i] != '\0'; i++){
        if ((str[i] >= '0') && (str[i] <= '9')){
            sum += (str[i] - '0');
        }
    }
    cout<<sum;
    return 0;
}