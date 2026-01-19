#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll c;
        cin>>c;
        vector<ll>a;
        ll x;
        for(int i=1;i<=n;i++){
            cin>>x;
            a.push_back(i+x);
        }
        sort(a.begin(),a.end());
        ll ans=0;
        for(int i=0;i<n;i++){
            if(c>=a[i]){
                ans++;
                c-=a[i];
            }else{
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}