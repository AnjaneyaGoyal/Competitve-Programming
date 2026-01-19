#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll x;
        cin>>n>>x;
        ll a[n];
        ll s=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin>>a[j];
            }
            for(int j=0;j<n;j++){
                if((a[j]|x)==x){
                    s|=a[j];
                }else{
                    break;
                }
            }
        }
        if(s==x){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }
    return 0;
}