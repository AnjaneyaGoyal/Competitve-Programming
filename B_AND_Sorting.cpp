#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            b[i]=i;
        }
        int ans=INT_MAX;
        bool check =true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(b[i]!=a[i] && check){
                ans=b[i]&ans;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}