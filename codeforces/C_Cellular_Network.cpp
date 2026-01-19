#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int l=0,r=0;
    int ans=0;
    for(int i=0;i<n;i++){
        while(r<m-1 && b[r]<a[i]){
            r++;
        }
        if(r!=0){
            l=r-1;
        }
        ans=max(ans,min(abs(a[i]-b[l]),abs(a[i]-b[r])));
    }
    cout<<ans<<"\n";
}