#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        vector<int>res;
        for(int i=0;i<n;i++){
            int l=1,r=i+1;
            while(l<=r){
                int m=l+(r-l)/2;
                if(a[i-m+1]>=m){
                    l=m+1;
                }else{
                    r=m-1;
                }
            }
            res.push_back(r);
        }
        for(auto it:res){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}