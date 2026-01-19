#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,n,x,k=0,i;
    cin>>t;
    while(t--){
        k=0;
        cin>>n>>x;
        int a[n];
        for(i=0;i<n;i++){
            if(k==x){
                k++;
            }
            a[i]=k;
            k++;
        }
        if(n>x){
            a[n-1]=x;
        }
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}