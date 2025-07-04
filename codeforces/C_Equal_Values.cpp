#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        long long i = 0;
        long long ans = 1e18;

        while (i < n) {
            long long j = i;
            while (j < n && a[j] == a[i]) {
                ++j;
            }
            ans = min(ans, (i + n - j) * a[i]);
            i = j;
        }

        cout << ans << "\n";
    }
    return 0;
}
