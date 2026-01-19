#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];

        int target = a[j];
        int strongest = 0;

        for (int i = 1; i <= n; ++i) {
            if (a[i] > strongest) {
                strongest=a[i];
            }    
        }

        if (strongest==target || k>1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
