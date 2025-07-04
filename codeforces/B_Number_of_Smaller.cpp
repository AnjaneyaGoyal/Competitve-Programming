#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i = 0, n, m, t, j;
    ll l=0,r=0,sum=0;
    cin >> n >> m;
    t = n + m;
    vector<ll> a(n), b(m);

    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(i = 0; i < m; i++){
        cin >> b[i];
    }
    j=0;
    for(i=0;i<m;i++){
       while(b[i]>a[j] && j<n){
            sum++;
            j++;
       }
       cout<<sum<<" ";
    }
}