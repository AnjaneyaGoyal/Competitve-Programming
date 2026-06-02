#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long p = 0, q = 0;

        for(char x : s){
            if(x == '_') p++;
            else q++;
        }

        long long L = q / 2;
        long long R = q - L;

        long long ans = p * L * R;

        cout << ans << "\n";
    }
    return 0;
}