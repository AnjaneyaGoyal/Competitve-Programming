#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int p=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                p++;
            }else{
                p--;
            }
        }
        if(p!=0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}