#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int nbc=0,nsc=0,ncc=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='B'){
            nbc++;
        }else if(s[i]=='S'){
            nsc++;
        }else{
            ncc++;
        }
    }
    int nb,ns,nc;
    cin>>nb>>ns>>nc;
    ll a,b,c;
    cin>>a>>b>>c;
    ll r;
    cin>>r;
    ll l=0,h=r+200;
    while(l<=h){
        ll mid=l+(h-l)/2;
        ll p1=max((nbc*mid)-nb,0LL);
        ll p2=max((ncc*mid)-nc,0LL);
        ll p3=max((nsc*mid)-ns,0LL);
        ll price= p1*a+p2*c+p3*b;
        if(price<=r){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    cout<<h<<"\n";
}