#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    vector<ll>isp(1e6+1,0);
    for(ll i=2;i<=10000;i++){
        ll current=i*i*i;
        ll current1=(current-1)/(i-1);
        while(current1<=1e6){
            isp[current1]=1;
            current*=i;
            current1=(current-1)/(i-1);
        }
    }
    while(t--){
        int n;
        cin>>n;
        if(isp[n]){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}