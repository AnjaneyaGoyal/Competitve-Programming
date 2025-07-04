/*#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j;
    ll m,sum;
    cin>>n>>m;
    vector<ll>a(n+1);
    unordered_map<ll,int> mpp;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=1;i<=n;i++){
        sum=m-a[i];
        for(j=i+1;j<=n;j++){
            if(mpp.count(sum-a[j])){
                if(mpp[sum-a[j]]<j){
                    cout<<i<<" "<<mpp[sum-a[j]]<<" "<<j;
                }else{
                    cout<<i<<" "<<j<<" "<<mpp[sum-a[j]];        
                }
                return 0;
            }
            mpp[a[j]]=j;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
*/
//getting tle from above code using 3 pointers approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    ll m;
    cin >> n >> m;
    
    vector<pair<ll, int>> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].first;
        a[i].second = i;  
    }

    sort(a.begin() + 1, a.end(), [](pair<ll, int> &x, pair<ll, int> &y) {
        return x.first < y.first;
    });

    for (int i = 1; i <= n; ++i) {
        ll sum = m - a[i].first;
        int l = i + 1, r = n;
        while (l < r) {
            ll t = a[l].first + a[r].first;
            if (t == sum) {
                vector<int> res = {a[i].second, a[l].second, a[r].second};
                sort(res.begin(), res.end());  
                cout << res[0] << " " << res[1] << " " << res[2] << "\n";
                return 0;
            } else if (t < sum) {
                ++l;
            } else {
                --r;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
