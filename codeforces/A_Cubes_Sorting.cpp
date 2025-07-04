#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long t,n,i,j;
    cin>>t;
    while(t--){
        int steps=0;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n-1;i++){
            if(a[i]<=a[i+1]){
                steps++;
                break;
            }
        }
        if(steps){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}