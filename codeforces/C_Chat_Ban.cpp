#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll helper(ll mid, ll k){
    if(mid < k){
        return mid * (mid + 1) / 2;
    }else{
        ll count = k * (k + 1) / 2;
        count += (k - 1) * k / 2;
        count -= (2 * k - mid) * (2 * k - mid - 1) / 2;
        return count;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll k, x;
        cin >> k >> x;
        ll maxSum = k * k;
        if(x > maxSum){
            cout << 2 * k - 1 << "\n";
            continue;
        }
        ll l = 1, r = 2 * k - 1;
        ll ans = 2 * k - 1;
        while(l <= r){
            ll mid = l + (r - l) / 2;
            if(helper(mid, k) >= x){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
