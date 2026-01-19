#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll count_x=0,count_y=0,cxy=0;
        count_x=n/x;
        count_y=n/y;
        cxy=n/((x/__gcd(x,y))*y);
        count_x-=cxy;
        count_y-=cxy;
        ll sx=0,sy=0;
        ll j=n;
        sx=((count_x)*(2*n-count_x+1))/2;
        sy=((count_y+1)*count_y)/2;
        cout<<sx-sy<<"\n";
    }
    return 0;
}