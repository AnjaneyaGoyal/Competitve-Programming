#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool helper(double mid,double x,int n,int a[]){
    double y=0;
    for(int i=0;i<n;i++){
        y += (floor)(a[i]/mid) ;
    }
    return y>=x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    double x;
    cin>>n>>x;
    vector<int>a(n);
    int max_e=INT16_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        max_e=max(max_e,a[i]);
    }
    double l=0,r=max_e;
    double ans;
    while(r-l>1e-9){
        double mid= l+(r-l)/2;
        if(helper(mid,x,n,a.data())){
            ans=mid;
            l=mid;
        }else{
            r=mid;
        }
    }
    cout<<setprecision(7)<<ans<<"\n";
}