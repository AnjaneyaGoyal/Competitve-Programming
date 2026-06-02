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
        cin >> n;

        map<ll,ll>freq;

        for (int i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            freq[x - i]++;
        }
        ll ans = 0;
        for (auto &p : freq) {
            long long f = p.second;
            ans += f * (f - 1) / 2;
        }
        cout << ans << "\n";
    }
    return 0;
}
