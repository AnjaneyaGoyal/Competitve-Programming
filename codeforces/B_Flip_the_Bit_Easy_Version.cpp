#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n+2);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int x,ans=0;
        cin>>x;
        a[0]=a[n+1]=a[x];
        int left=0,right=0;
        for(int i=0;i<x;i++ ){
            if(a[i]!=a[i+1]){
                left++;
            }
        }
        for(int i=x;i<n+1;i++){
            if(a[i]!=a[i+1]){
                right++;
            }
        }
        ans=max(left,right);
        cout<<ans<<"\n";

    }
    return 0;
}