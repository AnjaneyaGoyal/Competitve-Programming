#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        vector<long long> ops;
        long long diff = a ^ b;

        for (int i = 0; i < 31 && ops.size() < 100; i++) {
            long long x = 1LL << i;
            if (((diff >> i) & 1) && x < a) {  
                ops.push_back(x);
                a ^= x;
            }
        }

        if (a != b) {
        
            cout << -1 << "\n";
        } else {
            cout << ops.size() << "\n";
            for (long long x : ops) cout << x << " ";
            cout << "\n";
        }
    }
}
