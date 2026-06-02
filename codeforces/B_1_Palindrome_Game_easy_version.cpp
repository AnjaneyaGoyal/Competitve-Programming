#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count++;
            }
        }
        int p=2;
        int i=1;
        int al=0,bb=0;
        if(count==1 || count%2==0){
            cout<<"BOB"<<"\n";
            continue;
        }else{
            cout<<"ALICE"<<"\n";
        }  
    }
    return 0;
}