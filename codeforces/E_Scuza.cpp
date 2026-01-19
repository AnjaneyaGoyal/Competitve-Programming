#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<ll>a(n);
        vector<ll>p(n);
        vector<ll>b(q);
        vector<ll>la(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        p[0]=a[0];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+a[i];
        }
        la[0]=a[0];
        for(int i=1;i<n;i++){
            la[i]=max(la[i-1],a[i]);
        }
        for(int i=0;i<q;i++){
            cin>>b[i];
        }

        ll target=-1;
        ll ans=-1;
        for(int i=0;i<q;i++){
            target=b[i];
            ans=0;
            int l=0,r=n-1;
            int mid=-1;
            while(l<=r){
                mid=l+(r-l)/2;
                if(la[mid]<=target){
                    ans=p[mid];
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            cout<<ans<<" ";
        } 
        cout<<"\n";
    }
    return 0;
}