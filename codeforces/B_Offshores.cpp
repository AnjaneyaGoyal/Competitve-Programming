#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long x, y;
        cin>>n>>x>>y;
        vector<long long> a(n);
        long long total = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            total += a[i] / x;
        }
        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long give = a[i] / x;
            long long option1 = a[i] + (total - give) * y
            ans = max({ans, option1});
        }

        cout << ans << "\n";
    }
}