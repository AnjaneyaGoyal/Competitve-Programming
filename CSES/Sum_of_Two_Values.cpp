#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    ll m;
    cin >> n >> m;

    vector<ll> a(n + 1);       
    map<ll, int> mpp;          

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        if (mpp.count(m - a[i])) {
            cout << mpp[m - a[i]] << " " << i;
            return 0;
        }
        mpp[a[i]] = i;
    }

    cout << "IMPOSSIBLE";
    return 0;
}
