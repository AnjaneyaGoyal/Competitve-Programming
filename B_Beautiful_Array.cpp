#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, b, x;
        cin >> n >> k >> b >> x;

        vector<ll> a(n, 0); 

        ll mn = k * b;
        ll mx = mn + (k - 1) * n;
        ll p = x - mn;

        if (x < mn || x > mx) {
            cout << "-1\n";
            continue;
        }

        for (int i = 0; i < n; i++) {
            ll add = min(k - 1, p);
            a[i] = add;
            p -= add;
        }

        a[n - 1] += k * b;

        for (int i=0;i<n;i++){
            cout <<a[i]<< " ";
        }
        cout << "\n";
    }
}
