#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    ll l = 1, r = 1e18, ans = -1;

    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll sum = mid/a[0]; 

        for (int i = 1; i < n; i++) {
            sum+=mid/a[i];
            if (sum > m) break; 
        }

        if (sum >= m) {
            ans = mid;
            r = mid - 1; 
        } else {
            l = mid + 1;
        }
    }

    cout << ans << "\n";
}
