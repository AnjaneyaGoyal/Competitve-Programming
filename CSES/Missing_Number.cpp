#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int a[n];
    a[0]=0;
    for(i=1;i<n;i++){
        cin>>a[i];
    }
    bool check =true;
    sort(a,a+n);
    for(i=0;i<n-1;i++){
        if(a[i+1]==a[i]+1){
            check=true;
        }else{
            cout<<a[i]+1<<"\n";
            check=false;
            break;
        }
    }
    if(check){
        cout<<a[i]+1<<"\n";
    }
    
}
