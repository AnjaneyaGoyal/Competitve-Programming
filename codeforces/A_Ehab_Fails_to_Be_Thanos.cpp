#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,i,t,sum1=0,p,sum2=0;
    cin>>t;
    n=2*t;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==a[n-1]){
        cout<<-1;
    }else{
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }

}