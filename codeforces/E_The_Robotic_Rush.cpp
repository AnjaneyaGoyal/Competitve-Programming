#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n, m, k;
        cin >> n >> m >> k;

        vector<ll> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        string s;
        cin >> s;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<ll> d(k), mn(k), mx(k);

        for (int i = 0; i < k; i++) {

            if (i == 0) {
                if (s[i] == 'L'){
                    d[i] = -1;
                }
                else{
                    d[i] = 1;
                }

                mn[i] = min(0LL, d[i]);
                mx[i] = max(0LL, d[i]);
            }
            else {
                if (s[i] == 'L'){
                    d[i] = d[i - 1] - 1;
                }
                else{
                    d[i] = d[i - 1] + 1;
                }

                mn[i] = min(mn[i - 1], d[i]);
                mx[i] = max(mx[i - 1], d[i]);
            }
        }


        unordered_map<ll, int> kill;
        kill.reserve(n * 2);

        for (ll sp : b) {

            ll prevMin = 0;
            for (int i = 0; i < k; i++) {
                if (mn[i] < prevMin) {
                    ll x = sp - mn[i];
                    if (kill.find(x) == kill.end()) {
                        kill[x] = i;
                    }
                    prevMin = mn[i];
                }
            }

            ll prevMax = 0;
            for (int i = 0; i < k; i++) {
                if (mx[i] > prevMax) {
                    ll x = sp - mx[i];
                    if (kill.find(x) == kill.end()) {
                        kill[x] = i;
                    }
                    prevMax = mx[i];
                }
            }
        }

        vector<int> dead(k, 0);

        for (ll x : a) {
            if (kill.find(x) != kill.end()) {
                dead[kill[x]]++;
            }
        }

        int alive = n;
        for (int i = 0; i < k; i++) {
            alive -= dead[i];
            cout << alive << " ";
        }
        cout << "\n";
    }

    return 0;
}
