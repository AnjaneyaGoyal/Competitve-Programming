#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<ll> b(n + 1, 0);  
        for (int i = 0; i < n; i++) {
            b[i + 1] = b[i] + a[i];  
        }

        ll ans = 0;
        for (int i = 0; i <= k; i++) {
            ll sum = b[n - (k - i)] - b[2 * i];
            ans = max(ans, sum);
        }

        cout << ans << "\n";
    }
}
