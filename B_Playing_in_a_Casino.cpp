#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<long long>>a(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                a[j].push_back(x);
            }
        }
        for(int i=0;i<m;i++){
            sort(a[i].begin(),a[i].end());
        }
        ll sum=0;
        for(int i=0;i<m;i++){
            vector<ll>res(n,0);
            res[n-1]=a[i][n-1];
            for(int j=n-2;j>=0;j--){
                res[j]=a[i][j]+res[j+1];
            }
            for(int j=0;j<n-1;j++){
                ll cnt=res[j+1]-(1LL)*(n-1-j)*a[i][j];
                sum+=cnt;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}