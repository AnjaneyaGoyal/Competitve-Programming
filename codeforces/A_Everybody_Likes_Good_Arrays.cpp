#include <bits/stdc++.h>
using namespace std;

int main(){
   
    int n,m,l=0;
   
    cin>>n;
    for(n;n>0;n--){
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        for(int k=0;k<m-1;k++){
            if(a[k]%2==0 && a[k+1]%2==0){
                l++;
            }
            if(a[k]%2==1 && a[k+1]%2==1){
                l++;
            }
        }
        cout<<l<<"\n";
        l=0;
    }
   
}