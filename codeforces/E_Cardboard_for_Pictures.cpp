#include <bits/stdc++.h>
using namespace std;
#define ll long long

int helper(ll mid, ll c, const vector<int>& a, int n) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (1LL * (2 * mid + a[i]) * (2 * mid + a[i]));
        if (sum > c) {
            return 1; 
        }
    }
    if (sum == c) {
        return 0;  
    }
    return -1; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll l = 1, r = 1e9;
        ll ans = l;
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            int result = helper(mid, c, a, n);
            if (result == 0) {
                ans = mid; 
                break;
            } else if (result == 1) {
                r = mid - 1;  
            } else {
                l = mid + 1;  
            }
        }

        cout << ans << "\n";
    }
}
