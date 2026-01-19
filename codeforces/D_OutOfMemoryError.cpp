#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        ll h;
        cin >> n >> m >> h;

        vector<ll> orig(n), cur(n);
        vector<int> last_update(n, -1);

        for (int i = 0; i < n; i++) {
            cin >> orig[i];
            cur[i] = orig[i];
        }

        int last_reset = -1;
        int time = 0;

        while (m--) {
            int b;
            ll c;
            cin >> b >> c;
            b--;

            // If this index wasn't updated after last reset
            if (last_update[b] < last_reset) {
                cur[b] = orig[b];
            }

            if (cur[b] + c > h) {
                last_reset = time;
            } else {
                cur[b] += c;
                last_update[b] = time;
            }
            time++;
        }

        for (int i = 0; i < n; i++) {
            if (last_update[i] < last_reset)
                cout << orig[i] << " ";
            else
                cout << cur[i] << " ";
        }
        cout << "\n";
    }
}
