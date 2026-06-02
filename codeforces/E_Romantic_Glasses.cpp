#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n+1,0);
        vector<ll>o(n+1,0);
        vector<ll>e(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"NO"<<"\n";
            continue;
        }
        o[1]=a[1];
        e[2]=a[2];
        for(int i=2;i<=n;i++){
            if(i%2==0){
                e[i]=e[i-1]+a[i];
                o[i]=o[i-1];
            }else{
                o[i]=o[i-1]+a[i];
                e[i]=e[i-1];   
            }
        }
        vector<ll>pfx(n+1,0);
        map<ll,int>mp;
        bool check=false;
        for(int i=1;i<=n;i++){
            pfx[i]= o[i]-e[i];
            mp[pfx[i]]++;
            if(pfx[i]==0||mp[pfx[i]]==2){
                check=true;
                break;
            }
        }
        
        if(check){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}