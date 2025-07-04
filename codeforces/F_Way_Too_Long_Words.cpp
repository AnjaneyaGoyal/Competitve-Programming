#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,i,p;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()<=10){
            cout<<s<<"\n";
        }
        if(s.size()>10){
            cout<<s[0];
            p=s.size()-2;
            cout<<p;
            cout<<s[s.size()-1]<<"\n";
        }   
    }
}