#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n][3];
    int sum[3] = {0, 0, 0}; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
            sum[j] += a[i][j]; 
        }
    }

    if (sum[0] == 0 && sum[1] == 0 && sum[2] == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
