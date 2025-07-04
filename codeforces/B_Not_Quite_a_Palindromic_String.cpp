#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,t,i,k,up;
    cin>>t;
    while(t--){
        int o=0,z=0,count=0;
        cin>>n>>k;
        string a;
        cin>>a;
        for(i=0;i<n/2;i++){
            if(a[i]==a[n-i-1]){
                if(a[i]=='0'){
                    z++;
                }else{
                    o++;
                }
                count++;
            }
        }
        if(k==count){
            cout<<"YES"<<"\n";
        }else if(count<k){
            int rem=k-count;
            up=(n)/2-count;
            if(rem%2==0 && rem<=up){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }else{
            int extra=count-k;
            if(extra%2==0 && (extra/2)<=z && (extra/2)<=o ){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}