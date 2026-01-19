#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        a--; b--; 

        vector<ll> x(n), y(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }

        ll ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);

        ll minA = LLONG_MAX, minB = LLONG_MAX;


        for (int i = 0; i < k; i++) {
            minA = min(minA, abs(x[a] - x[i]) + abs(y[a] - y[i]));
            minB = min(minB, abs(x[b] - x[i]) + abs(y[b] - y[i]));
        }

        if (k == 0) {
            cout << ans << "\n";
        } else {
            cout << min(ans, minA + minB) << "\n";
        }
    }
}
