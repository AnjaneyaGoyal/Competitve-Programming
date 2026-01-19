#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> pairs[1001];
        int n;
        cin >> n;
        vector<int> idx(1001, 0);
        for (int i = 1; i <= n; ++i) { 
            int x;
            cin >> x;
            idx[x] = i;
        }
        for (int i = 1; i <= 1000; ++i) {
            for (int j = 1; j <= 1000; ++j) {
                if (__gcd(i, j) == 1) {
                    pairs[i].push_back(j); 
                }
            }
        }
        int ans = -1; 
        for (int i = 1; i <= 1000; ++i) {
            if (idx[i] == 0) {
                continue;
            }
            for (int j : pairs[i]) {
                if (idx[j] != 0){
                    ans = max(ans, idx[i] + idx[j]);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}