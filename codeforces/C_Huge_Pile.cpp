#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n == k){
            cout<<0<<"\n";
            continue;
        }
        if(n < k){
            cout<<-1<<"\n";
            continue;
        }
        int count = 0;
        ll l=n,r=n;
        while(r!=1){
            if(l<=k && k<=r){
                break;
            }
            r=r/2+r%2;
            l=l/2;
            count++;
        }
        if(l<=k && k<=r){
            cout<<count<<"\n";
        
        }else{
            cout<<-1<<"\n";
        }
    }

    return 0;
}
