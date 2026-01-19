#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        ll l = 1, r = n;
        ll sumL = a[1], sumR = a[n];
        ll ans = 0;

        while (l < r) {
            if (sumL == sumR) {
                ans = max(ans, l +1 + (n - r));
                l++;
                sumL += a[l]; 
            }
            else if (sumL < sumR) {
                l++;
                sumL+=a[l];
            }
            else {
                r--;
                sumR+=a[r];
            }
        }

        cout << ans << "\n";
    }
}
