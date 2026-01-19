#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll l, r;
        cin >> n >> l >> r;

        vector<ll> a(n);
        bool ok = true;

        for (int i = 1; i <= n; i++) {
            ll x = ((l + i - 1) / i) * i;
            if (x > r) {
                ok = false;
                break;
            }
            a[i - 1] = x;
        }

        if (!ok) {
            cout << "NO"<<"\n";
        } else {
            cout << "YES"<<"\n";
            for (ll x : a){
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
