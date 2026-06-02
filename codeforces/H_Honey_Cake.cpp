#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll w,d,h;
    cin>>w>>d>>h;
    ll n;
    cin>>n;
    ll x,y,z;
    x=__gcd(w,n);
    n/=x;
    y=__gcd(d,n);
    n/=y;
    z=__gcd(h,n);
    n/=z;
    if(n==1){
        cout<<x-1<<" "<<y-1<<" "<<z-1<<"\n";
    }else{
        cout<<-1<<"\n";
    }

    return 0;
}