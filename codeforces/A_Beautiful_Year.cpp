#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int niq = n + 1; niq < 10000; niq++) {
        int frequency[10] = {0}; 
        int temp = niq; 

        for (int i = 0; i < 4; i++) {
            int t = temp % 10;
            frequency[t]++;
            temp /= 10;
        }

        bool unique_digits = true;
        for (int i = 0; i < 10; i++) {
            if (frequency[i] > 1) { 
                unique_digits = false;
                break;
            }
        }

        if (unique_digits) { 
            cout << niq << "\n";
            break;
        }
    }

    return 0;
}
