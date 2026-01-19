#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        bool Even = false,Odd = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0){
                Even = true;
            }else{
                Odd = true;
            }
        }

        if (Even && Odd){
            sort(a.begin(), a.end());
        }
        for (ll x : a){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
