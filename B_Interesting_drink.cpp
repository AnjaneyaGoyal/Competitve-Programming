#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,q,i,t,low,high,mid,ans;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    sort(a,a+n);
    while(q--){
        low=-1;
        high=n;
        cin>>t;
        while(low+1<high){ 
            mid= low+(high-low)/2;
            if(a[mid]<=t){
                low=mid;
            }else{
                high=mid;
            }
        }
        cout<<low+1<<"\n";
    }
    return 0;
}