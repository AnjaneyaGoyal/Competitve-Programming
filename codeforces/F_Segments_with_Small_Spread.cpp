#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    multiset<ll> window;
    ll count = 0;
    int l = 0;

    for (int r = 0; r < n; ++r) {
        window.insert(a[r]);

        while (*window.rbegin() - *window.begin() > k) {
            window.erase(window.find(a[l]));
            l++;
        }

        count += (r - l + 1); 
    }

    cout << count << "\n";
    return 0;
}
