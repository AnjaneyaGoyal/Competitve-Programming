#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll x=0;
        ll y=0;
        bool flag =true;
        for(int i=0;i<n;i++){
            if(i%2==0 && i<n){
                x=__gcd(x,a[i]);
            }else{
                y=__gcd(y,a[i]);
            }
        }
        for(int i=1;i<n;i+=2){
            if(a[i]%x==0){
                flag=false;
                break;
            }   
        }

        if(flag){
            cout<<x<<"\n";
            continue;
        }
        flag=true;
        for(int i=0;i<n;i+=2){
            if(a[i]%y==0){
                flag=false;
                break;
            }   
        }
        if(flag){
            cout<<y<<"\n";
        }else{
            cout<<"0\n";   
        }

    }
}