#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,i,bal;
    cin>>t;
    while(t--){
        bal=1;
        string s;
        cin>>s;
        for(i=1;i<s.size()-1;i++){
            if(s[i]=='('){
                bal++;
            }else if(s[i]==')'){
                bal--;
            }
            if(bal==0){
                cout<<"Yes"<<"\n";
                break;
            }
        }
        if(bal>0){
            cout<<"NO"<<"\n";
        }
    }
    
}