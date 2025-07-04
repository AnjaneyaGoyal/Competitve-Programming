#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, s,l = 0, sum = 0, ans = INT_MAX,r;
    cin >> n >> s;

    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for ( r = 0; r < n; r++) {
        sum += a[r];

        while (sum >= s) {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
    }

    if (ans == INT_MAX)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
}
