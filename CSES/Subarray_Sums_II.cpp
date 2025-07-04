#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    ll m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<ll, int> prefix_count;
    prefix_count[0] = 1; 

    ll prefix_sum = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        prefix_sum += a[i];

        if (prefix_count.find(prefix_sum - m) != prefix_count.end()) {
            count += prefix_count[prefix_sum - m];
        }

        prefix_count[prefix_sum]++;
    }

    cout << count;
    return 0;
}
