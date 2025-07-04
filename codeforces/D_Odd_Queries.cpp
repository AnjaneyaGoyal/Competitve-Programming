#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n), prefix(n + 1, 0);

      
        for(int i = 0; i < n; i++){
            cin >> a[i];
            prefix[i + 1] = prefix[i] + a[i];
        }

        while(q--){
            ll l, r, inc;
            cin >> l >> r >> inc;
            l--, r--;  

            ll seg_sum = prefix[r + 1] - prefix[l];

            ll new_total = prefix[n] - seg_sum + (r - l + 1) * inc;

            if(new_total % 2 == 0) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }

    return 0;
}
