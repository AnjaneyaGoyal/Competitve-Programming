#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            if(a[0]==x){
                cout<<"Yes"<<"\n";
            }else{
                cout<<"No"<<"\n";
            }
        }
        int i=0,j=1;
        bool check =true;
        sort(a.begin(),a.end());
        while(i<n &&j<n){
            if(a[i]+abs(x)==a[j]){
                cout<<"YES"<<"\n";
                check=false;
                break;
            }else if(a[i]+abs(x)<a[j]){
                i++;
            }else{
                j++;
            }
        }
        if(check){
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}