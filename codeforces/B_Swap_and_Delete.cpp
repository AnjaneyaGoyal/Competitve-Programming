#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n= s.length();
        int z=0,o=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                z++;
            }else{
                o++;
            }
        }
        if(z==o){
            cout<<"0"<<"\n";
        }else{
            cout<<abs(z-o)<<"\n";
        }
    }
}