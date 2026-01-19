#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool helper(ll n, ll a, ll b, ll mid) {
    mid -= a;
    if (mid < 0) return false;
    ll x = mid / a + mid / b;
    return x >= n - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b;
    cin >> n >> a >> b;

    if (b < a) swap(a, b);

    ll l = 0, r = max(a, b) * n, ans = r;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (helper(n, a, b, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << "\n";
}
