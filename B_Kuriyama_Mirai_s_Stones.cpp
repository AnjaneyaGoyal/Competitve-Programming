#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, l, r, i, q;
    cin >> n;

    vector<ll> ar(n), pref_ar(n + 1, 0);
    for(i = 0; i < n; i++){
        cin >> ar[i];
        pref_ar[i + 1] = pref_ar[i] + ar[i];
    }

    vector<ll> ra = ar;
    sort(ra.begin(), ra.end());
    vector<ll> pref_ra(n + 1, 0);
    for(i = 0; i < n; i++){
        pref_ra[i + 1] = pref_ra[i] + ra[i];
    }

    cin >> q;
    while(q--){
        int type;
        cin >> type >> l >> r;  

        if(type == 1){
            cout << pref_ar[r] - pref_ar[l - 1] << "\n";
        }else{
            cout << pref_ra[r] - pref_ra[l - 1] << "\n";
        }
    }
}
