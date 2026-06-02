#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = INT_MAX;

        if(k != 4){
            for(int i = 0; i < n; i++){
                int rem = a[i] % k;
                int j = (k - rem) % k;
                ans = min(ans, j);
            }
        }else{
            int count = 0;

            for(int i = 0; i < n; i++){
                int x = a[i];

                while(x % 2 == 0){
                    count++;
                    x /= 2;

                    if(count >= 2) break;
                }

                if(count >= 2) break;
            }

            int best = INT_MAX;

            for(int i = 0; i < n; i++){
                int need = (4 - (a[i] % 4)) % 4;
                best = min(best, need);
            }

            if(count >= 2){
                best = 0;
            } else{
                best = min(best, 2 - count);
            }

            ans = best;
        }


        cout <<ans<< "\n";
    }
    return 0;
}