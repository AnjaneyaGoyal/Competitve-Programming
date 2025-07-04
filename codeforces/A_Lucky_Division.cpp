#include <bits/stdc++.h>
using namespace std;

bool lucky(int k) {
    while (k > 0) {
        int digit = k % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        k /= 10;
    }
    return true;
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int j;
    cin >> j;

    bool lets_go = false; 

    for (int i = 1; i <= j; i++) { 
        if (j % i == 0 && lucky(i)) {
            lets_go = true;
            break; 
        }
    }

    cout << (lets_go ? "YES" : "NO") << "\n";
    return 0;
}
