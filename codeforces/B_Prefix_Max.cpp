#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll>a(n);
        ll maxa=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxa=max(maxa,a[i]);
        }
        cout<<maxa*n<<"\n";
    }
    return 0;
}