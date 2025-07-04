#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k,i,j=0;
    cin>>n>>k;
    int sum=0,num=0;
   
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }

    for(int i=2;i<=n;i++){
        if(check(i)){
            a[i-2]=i;
            num++;
        }
    }
    int ne[num];
    for(i=0;i<n;i++){
      if(a[i]!=0){
        ne[j]=a[i];
        j++;
      }
    }
    for(i=0;i<num-1;i++){
        int prime=0;
        prime=ne[i]+ne[i+1]+1;
        if(check (prime)&&prime<=n){
            sum++;
        }
    }
    
    if(sum>=k){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}

