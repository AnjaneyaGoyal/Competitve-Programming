#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool helper(double mid,double x){
    double y = (mid*mid) + sqrt(mid);
    return y>=x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x;
    cin>>x;
    double l=0,r=1e6+1;
    double ans;
    while(r-l>1e-10){
        double mid= l+(r-l)/2;
        
        if(helper(mid,x)){
            ans=mid;
            r=mid;
        }else{
            l=mid;
        }
    }
    cout<<setprecision(7)<<ans<<"\n";
}