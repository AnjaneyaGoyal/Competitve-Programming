#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        ll x;
        cin>>n>>x;
        vector<ll>a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i]>>c[i];
        }
        ll start=0;
        ll maxa=-1e9;
        for(int i=0;i<n;i++){
            maxa=max(maxa,a[i]*b[i]-c[i]);
            start+=a[i]*(b[i]-1);
        }
        x-=start;
        if(x<=0){
            cout<<0<<"\n";
            continue;
        }
        if(maxa<=0){
            cout<<-1<<"\n";
            continue;
        }
        cout<<(x+maxa-1)/maxa<<"\n";
    }
    return 0;
}