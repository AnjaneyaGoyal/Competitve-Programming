#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    ll v = 0;            
    ll t = 0;              
    ll current = 1;        

    vector<ll> last(n, 0);

    for(int i = 0; i < q; i++){
        int p;
        cin >> p;

        if(p == 1){
            int j;
            ll x;
            cin >> j >> x;
            j--;

            if(last[j] < t){
                a[j] = v;
            }

            sum += (x - a[j]);
            a[j] = x;
            last[j] = current++;
        }
        else{
            ll x;
            cin >> x;
            sum = n * x;
            v = x;
            t = current++;
        }

        cout << sum << "\n";
    }

    return 0;
}
