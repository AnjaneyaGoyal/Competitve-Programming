#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool helper(ll a[], int n, ll k, ll maxu) {
    ll sum = 0;
    int cnt = 1; 
    for (int i = 0; i < n; i++) {
        if (a[i] > maxu){
            return false; 
        }
        if (sum + a[i] > maxu) {
            cnt++;
            sum = a[i];
        } else {
            sum += a[i];
        }
    }
    return cnt <= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll m;
    cin >> n >> m;

    ll a[n];
    ll sum = 0, maxa = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        maxa = max(maxa, a[i]);
    }

    ll l = maxa, r = sum, ans = sum;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (helper(a, n, m, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
