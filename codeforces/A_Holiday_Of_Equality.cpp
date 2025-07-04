#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int i,n,max=-1,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    max=a[n-1];
 
    for(i=0;i<n;i++){
        if(a[i]<max){
            sum+=max-a[i];
        }
    }
    cout<<sum<<"\n";

}