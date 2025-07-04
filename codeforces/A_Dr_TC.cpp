#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int s[n]; 

        for (int i = 0; i < n; i++) {
            char c;
            cin >> c;
            s[i] = c - '0';
        }

        int count_one = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 1)
                count_one++;
        }

        int total_one = count_one * (count_one - 1) + (n - count_one) * (count_one + 1);
        cout << total_one << endl;
    }

    return 0;
}
