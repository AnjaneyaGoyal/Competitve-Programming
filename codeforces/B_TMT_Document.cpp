#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        vector<string> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int countT = 0, countN = 0;
        bool check = (a[0] == "T" && a[n-1] == "T");
        
        for (int i = 0; i < n; ++i) {
            if (a[i] == "T") {
                countT++;
            } else {
                countN++;
            }
        }
        
        if (countT == 2 * countN && check) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
