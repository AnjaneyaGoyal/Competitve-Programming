#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        char x;
        cin>>n>>x;
        string s;
        cin>>s;
        int l=-1,m=-1;
        bool c=true,d=false;
        int ans=0;
        for(char y:s){
            if(y!=x){
                c=false;
                break;
            }
        }
        if(c){
            cout<<0<<"\n";
            continue;
        }
        for(int i=1;i<=n;i++){
            bool ok= true;
            for(int j=i;j<=n;j+=i){
                if(s[j-1]!=x){
                    ok=false;
                    break;
                }
            }
            if(ok){
                cout<<1<<"\n";
                cout<<i<<"\n";
                goto next_case;
            }
        }
        cout<<2<<"\n";
        cout<<n-1<<" "<<n;
        cout<<"\n";

        next_case:;
    }
    return 0;
}