#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,int>>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i+1;
        }
        sort(a.begin(),a.end());
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((1LL)*a[j].first*a[i].first>=(2LL)*n){
                    break;
                }
                if(a[i].first*a[j].first==a[i].second+a[j].second){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}