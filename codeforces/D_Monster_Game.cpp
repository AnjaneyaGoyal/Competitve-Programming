#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        vector<ll> pref(n);
        pref[0] = b[0];
        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + b[i];
        }
        ll ans = 0;
        for(int i = 0; i < n; ){
            ll x = a[i];
            ll swords =n-i;  
            ll levels = upper_bound(pref.begin(), pref.end(), swords) - pref.begin();
            ans = max(ans, x * levels);
            while(i < n && a[i] == x){
                i++;
            }
        }

        cout<<ans<< "\n";
    }
    return 0;
}
