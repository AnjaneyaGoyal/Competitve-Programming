#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    getline(cin,s);
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]!='\\'){
            cout<<s[i];
        }
        if(s[i]=='\\'){
            break;
        }
    }
}