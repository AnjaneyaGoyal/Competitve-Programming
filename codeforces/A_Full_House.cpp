#include<bits/stdc++.h>
using namespace std;

      
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n=5;
    int i,j=0,a[n],k,t=0,p=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    sort(a,a+5);
    for(i=0;i<n;i++){
        if(a[0]==a[i]){
            p++;
        }
        if(a[4]==a[i]){
            t++;
        }
    }
    if(p==3 && t==2 || p==2 && t==3){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    
}

