#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;


        if(n == 1){
            cout << 0 << "\n";
            continue;
        }

        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }

        if(a[n-2] > a[n-1]){
            cout << -1 << "\n";
            continue;
        }

        sort(b.begin(), b.end());
        if(a == b){
            cout << 0 << "\n";
            continue;
        }

   
        if(a[n-1] >= 0){
            cout << n - 2 << "\n";
            for(int i = 1; i <= n - 2; i++){
                cout << i << " " << n - 1 << " " << n << "\n";
            }
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
