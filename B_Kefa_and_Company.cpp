#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    ll sum = 0, maxsum = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r].second;
        while (a[r].first - a[l].first >= m) {
            sum -= a[l].second;
            l++;
        }
        maxsum = max(maxsum, sum);
    }

    cout << maxsum << "\n";
    return 0;
}
