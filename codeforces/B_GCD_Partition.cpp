#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        vector<ll>pref(n);
        pref[0]=a[0];
        ll maxi=INT_MIN;
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+a[i];
        }
        ll ans=0;
        for(int i=0;i<n-1;i++){
            ans=__gcd(pref[i],sum-pref[i]);
            maxi=max(maxi,ans);
        }
        cout<<maxi<<"\n";
    }
    return 0;
}