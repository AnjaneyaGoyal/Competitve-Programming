#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1e9+7
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        bool check =true;
        ll ans=1;
        for(int i=0;i<n;i++){
            int x=b[i];
            int inc =(a+n)-upper_bound(a,a+n,x);
            ans=(ans*max(inc-i,0))%((ll)MOD);
        }
        cout<<ans<<"\n";
        
    }
}