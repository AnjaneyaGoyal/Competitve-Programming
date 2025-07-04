#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n;

    while (n--) {
        cin >> m;
        int a[m];  
        long long coin = 0, run_value = 0;

        for (int i = 0; i < m; i++) {
            cin >> a[i];  // 
        }

        for (int i = 0; i < m; i++) {
            if (a[i] >= 0) {
                run_value += a[i];
            } else {
                if (run_value >= abs(a[i])) {
                    run_value -=abs(a[i]);
                } else {
                    coin += (abs(a[i])- run_value);
                    run_value = 0;
                }
            }
        }

        cout << coin << "\n";  
    }

    return 0;
}
