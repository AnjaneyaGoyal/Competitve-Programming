#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    ll med = a[n/2];

    ll ans = 0;
    for (int i = 0; i < n; ++i){
        ans += llabs(a[i] - med);
    }
    cout << ans << '\n';
    return 0;
}
