#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    vector<ll> gaps;

    for(int i = 1; i < n; i++){
        ll diff = a[i] - a[i-1];
        if(diff > x){
            ll need = (diff - 1) / x;
            gaps.push_back(need);
        }
    }

    sort(gaps.begin(), gaps.end());

    ll groups = gaps.size() + 1;

    for(ll g : gaps){
        if(k >= g){
            k -= g;
            groups--;
        } else{
            break;
        }
    }

    cout << groups << "\n";
}
