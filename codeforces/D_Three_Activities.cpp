#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,int>>a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        for(int i=0;i<n;i++){
            cin>>b[i].first;
            b[i].second=i;
        }
        for(int i=0;i<n;i++){
            cin>>c[i].first;
            c[i].second=i;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        ll maxa=0;
        for(int i=n-1;i>n-4;i--){
            for(int j=n-1;j>n-4;j--){
                for(int k=n-1;k>n-4;k--){
                    if(a[i].second!=b[j].second && b[j].second !=c[k].second && a[i].second!=c[k].second){
                        maxa=max(maxa,a[i].first+b[j].first+c[k].first);
                    }
                }
            }
        }
        cout<<maxa<<"\n";
    }
    return 0;
}