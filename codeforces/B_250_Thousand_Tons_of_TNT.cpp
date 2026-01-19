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
        ll sum=0;
        for(int d=1;d<=n;d++){
            if(n%d==0){
                ll maxa=LLONG_MIN;
                ll mini=LLONG_MAX;
                for(int i=0;i<n;i+=d){
                    ll sm=0;
                    for(int j=i;j<i+d;j++){
                        sm+=a[j];
                    }
                    maxa=max(maxa,sm);
                    mini=min(mini,sm);
                }
                sum=max(sum,maxa-mini);
            }
            
        }
        cout<<sum<<"\n";
    }
    return 0;
}