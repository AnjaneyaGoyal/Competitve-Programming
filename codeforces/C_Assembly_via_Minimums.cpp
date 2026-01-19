#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=n*(n-1)/2;
        vector<ll>a(c);
        for(int i=0;i<c;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<c;i+=--n){
            cout<<a[i]<<" ";
        }
        cout<<1000000000<<"\n";
    }
    return 0;
}