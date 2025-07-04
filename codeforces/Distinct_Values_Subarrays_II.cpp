#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    map<ll, int> freq;
    ll count = 0;
    int l = 0;

    for (int r = 0; r < n; ++r) {
        freq[a[r]]++;

        while ((int)freq.size() > k) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) {
                freq.erase(a[l]);
            }
            l++;
        }

        count += (r - l + 1);
    }

    cout << count << "\n";
    return 0;
}
