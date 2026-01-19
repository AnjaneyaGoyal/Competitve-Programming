#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<ll>a(n);
        vector<ll>s(q);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            cin>>s[i];
        }
        int prev=31;
        for(int i=0;i<q;i++){
            if(s[i]>=prev){
                continue;
            }
            ll val=pow(2,s[i]);
            for(int j=0;j<n;j++){
                if(a[j]%val==0){
                    a[j]+=(val/2);
                }
                prev=s[i];
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }    
    return 0;
}