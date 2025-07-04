#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,i,mid,high,low,j;
    cin>>n;
    high =n-1;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[i]){
                swap(a[j],a[i]);
                }    
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}