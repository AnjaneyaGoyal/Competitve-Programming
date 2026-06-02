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
        vector<ll>m(31,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            for(int i=30;i>=0;i--){
                if(a[j]&(1LL<<i)){
                    m[i]++;
                    break;
                }
            }
        }
        ll ans=0;
        for(int i=0;i<31;i++){
            ans+=(m[i]*(m[i]-1)/2);
        }
        cout<<ans<<"\n";
    }
    return 0;
}