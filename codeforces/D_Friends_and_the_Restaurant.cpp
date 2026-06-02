#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>q(n);
        vector<pair<ll,int>>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>q[i];
        }
        for(int i=0;i<n;i++){
            b[i].first=(q[i]-a[i]);
            b[i].second=i;
        }
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        int count=0;
        int j=n-1;
        for(int i=0;i<n;i++){
            while(i<j && b[i].first+b[j].first<0){
                j--;
            }
            if(i>=j){
                break;
            }
            count++;
            j--;
        }
        cout<<count<<"\n";
    }
    return 0;
}