#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>c(n+1,0);
        for(int i=0;i<n;i++){
            c[a[i]]++;
        }
        if(c[0]==0){
            cout<<"NO"<<"\n";
        }else if(c[1]>0){
            cout<<"YES"<<"\n";
        }else{
            if(c[0]==1){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}