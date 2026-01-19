#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }
        sort(a.begin(), a.end());
        vector<int> b;
        b.push_back(a[0]);
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                b.push_back(a[i]);
            }
        }

        int c = 1;  
        int maxa = 1;    

        for (int i = 1; i < (int)b.size(); i++) {
            if (b[i] == b[i - 1] + 1) {
                c++;  
            } else {
                c=1; 
            }
            maxa = max(maxa,c);
        }

        cout <<maxa<< "\n";
    }

    return 0;
}
