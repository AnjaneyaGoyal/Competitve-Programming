#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int count=0;
    int l=0,r=n-1;
    while(l<=r){
        if(a[l]+a[r]<=m){
            l++;
        }
        r--;
        count++;
    }
    cout<<count;
}