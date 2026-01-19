#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n,k,x;
        cin>>n>>k>>x;
        ll max,min;
        min= k*(k+1)/2;
        max=n*(n+1)/2 -(n-k)*(n-k+1)/2;
        if(k*n < x){
            cout<<"NO\n";
            continue;
        }
        if(x>=min && x<=max){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
           
    }
}