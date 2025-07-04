#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(ll x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,maxlen=0;
    cin >> n;
    vector<int>a(n);
    unordered_set <int,custom_hash> s;
    for (int i = 0; i < n; ++i){
        cin>>a[i];
    }
    int l=0;
    for (int i = 0; i < n; ++i){
        while(s.count(a[i])){
            s.erase(a[l]);    
            l++;
        }
        s.insert(a[i]);
        maxlen=max(maxlen,i-l+1);    
    }
    cout<<maxlen;
}
