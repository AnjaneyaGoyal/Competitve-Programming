#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll sum = a[0];
        ll ans = a[0];
        ll mn = min(0LL, sum);

        for (int i = 1; i < n; i++) {
            if (abs(a[i] % 2 ) == abs(a[i - 1] % 2)) {
                sum = 0;
                mn = 0;
            }

            sum += a[i];
            ans = max(ans, sum - mn);
            mn = min(mn, sum);
        }

        cout << ans << "\n";
    }
}
