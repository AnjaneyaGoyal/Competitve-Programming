#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod= 998244353;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll ans=1;
        ll cur=1;
        ll len=1;
        int n=s.length();
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                len++;
                ans=(ans*cur)%mod;
                cur=1;
            }else{
                cur++;
            }
        }
        ans=(ans*cur)%mod;
        for(int i=1;i<=n-len;i++){
            ans=(ans*i)%mod;
        }
        cout<<n-len<<" "<<ans<<"\n";
    }
    return 0;
}