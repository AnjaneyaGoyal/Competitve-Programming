#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int  n,i,j;
    cin>>n;
    int nums[n];
    ll ans = 0;
    ll pre[n+1];
    ll suf[n+1];
    pre[0] = 0;
    suf[n] = 0;
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    for (int i=0;i<n;i++){
        pre[i+1] = pre[i]+nums[i];
    }
    for (int i=n-1;i>=0;i--){
        suf[i] = suf[i+1]+nums[i];
    }
    int ind = 0, ind2 = n;
    while (ind<=ind2){
        if (pre[ind]==suf[ind2]){
            ans = pre[ind];
            ind++;
            ind2--;
        }
        while (pre[ind]<suf[ind2]) ind++;
        while (pre[ind]>suf[ind2]) ind2--;
    }
    cout<<ans;
}
