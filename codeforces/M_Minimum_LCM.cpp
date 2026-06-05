#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=INT_MAX,a,b;
        b=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                b=n/i;
                a=i;
                break;
            }
        }
        cout<<b<<" "<<n-b<<"\n";
    }
    return 0;
}