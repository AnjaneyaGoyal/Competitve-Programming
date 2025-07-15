#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n;
    vector<int> a(n + 1), pfs(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    pfs[1] = a[1];
    for (int i = 2; i <= n; i++) {
        pfs[i] = pfs[i - 1] + a[i];
    }

    cin >> t;
    vector<int> b(t);
    for (int i = 0; i < t; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < t; i++) {
        int idx = lower_bound(pfs.begin() + 1, pfs.end(), b[i]) - pfs.begin();
        cout << idx << "\n";
    }
}
