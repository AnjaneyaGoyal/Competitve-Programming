#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long count = 0;
        long long ans = 0;

        for(int r = 0; r < n; r++){
            if(a[r] <= q){
                count++;
            } else {
                if(count >= k){
                    long long x = count - k + 1;
                    ans += (x * (x + 1)) / 2;
                }
                count = 0;
            }
        }

        // last segment
        if(count >= k){
            long long x = count - k + 1;
            ans += (x * (x + 1)) / 2;
        }

        cout << ans << "\n";
    }

    return 0;
}