#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,n,i,count=0,ans;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n]; 
        int at;      
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        at=-1;
        count=0;
        for(i=0;i<n;i++){
            if(at+1<a[i]){
                at=a[i];
                count++;
            }
        }
        cout<<count<<"\n";
    }
}