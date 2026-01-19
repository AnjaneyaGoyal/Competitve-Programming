#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        ll mini=0;
        for(int i=0;i<n;i++){
            mini=__gcd(mini,abs(a[i]-a[n-i-1]));
        }
        cout<<mini<<"\n";
    }
    return 0;
}