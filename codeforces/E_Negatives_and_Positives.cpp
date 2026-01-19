#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        ll sum = 0;
        ll mini = LLONG_MAX;
        int negCount = 0;

        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;

            if(x < 0){
                negCount++;
            }
            sum += abs(x);
            mini = min(mini, abs(x));
        }

        if(negCount % 2 == 1){
            sum -= 2 * mini;
        }

        cout << sum << "\n";
    }
    return 0;
}
