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
        k--;
        if(n%2==0){
            cout<<k%n+1<<"\n";
        }else{
            cout<<(k+((k)/(n/2)))%n +1 <<"\n";
        }
    }

    return 0;
}