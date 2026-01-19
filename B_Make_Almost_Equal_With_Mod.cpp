#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll k;
        ll ans=0;
        for(int i=1;i<=60;i++){
            k=1LL<<i;
            set<ll>s;
            for(int j=0;j<n;j++){
                s.insert(a[j]%k);
            }
            if(s.size()==2){
                ans=k;
                break;
            }

        }
        cout<<ans<<"\n";
    }
    return 0;
}