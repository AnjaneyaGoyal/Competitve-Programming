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
        vector<ll>a(n),b(n),diff(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll maxa=INT_MIN;
        for(int i=0;i<n;i++){
            diff[i]=a[i]-b[i];
            maxa=max(diff[i],maxa);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(diff[i]==maxa){
                count++;
            }
        }
        cout<<count<<"\n";
        for(int i=0;i<n;i++){
            if(diff[i]==maxa){
                cout<<i+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}