#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> a(n);
    unordered_map<ll, ll> freq;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        freq[a[i]]++;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        freq[a[i]]--;          
        ll rem = sum - a[i];
        if (rem%2==0) {
            ll need=rem/2;
            if (freq[need]>0) {
                ans.push_back(i + 1);
            }
        }
        freq[a[i]]++;             
    }
    cout << ans.size() << "\n";
    for (int idx : ans){
        cout<<idx<<" ";
    }
    return 0;
}
