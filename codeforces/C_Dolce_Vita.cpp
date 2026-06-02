#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        ll x;
        ll ans=0;
        cin >> n >> x;
        ll sum=0;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum+=a[i];
        }
        ll prev_day=-1;
        sort(a.begin(), a.end());
        int time=0;
        for(int i=n-1;i>=0;i--){
            ll curday;
            if(x-sum>=0){
                curday=(x-sum)/(i+1);
            }else{
                curday=-1;
            }
            ans+=(ll)(i+1)*(curday-prev_day);
            prev_day=curday;
            sum-=a[i];
        }
        cout <<ans<< "\n";
    }
    return 0;
}
