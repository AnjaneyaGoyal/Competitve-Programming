#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll sum=0;
        int maxa=0;
        ll ans=0;
        for(int i=0;i<min(n,k);i++){
            sum+=a[i];
            maxa=max(maxa,b[i]);
            ans=max(ans,sum+maxa*(k-i-1));
        }
        cout<<ans<<"\n";
    }
}