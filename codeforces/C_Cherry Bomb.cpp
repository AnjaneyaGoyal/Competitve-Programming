
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int known = 0;
        long long x = -1;
        bool invalid = false;

        for (int i = 0; i < n; ++i) {
            if (b[i] != -1) {
                x = a[i] + b[i];
                known++;
                break;
            }
        }

        if (known == 0) {
            long long low = *max_element(a.begin(), a.end());
            long long high = low + k;

            for (int i = 0; i < n; ++i) {
                high = min(high, a[i] + k);
            }

            long long ans = max(0LL, high - low + 1);
            cout << ans << '\n';
        } else {
       
            bool mismatch = false;

            for (int i = 0; i < n; ++i) {
                if (b[i] == -1) {
                    long long bi = x - a[i];
                    if (bi < 0 || bi > k) {
                        mismatch = true;
                        break;
                    }
                } else {
                    if (a[i] + b[i] != x) {
                        mismatch = true;
                        break;
                    }
                }
            }

            cout << (mismatch ? 0 : 1) << '\n';
        }
    }

    return 0;
}
