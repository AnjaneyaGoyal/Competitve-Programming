#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll s,n,l=0,r=0,sum=0,ans=0;
    cin>>n>>s;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(r<n && l<=r){
        sum=sum+a[r];
        while(sum>s){
            sum=sum-a[l];
            l++;
        }
        if(sum<=s){
            ans=max(ans,r-l+1);
            r++;
        }
    }
    cout<<ans;
}