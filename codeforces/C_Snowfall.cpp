#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%3==0 && a[i]%2==0){
                ans.push_back(a[i]);
            }
        }
        vector<int>two;
        vector<int>three;
        vector<int>rest;
        for(int i=0;i<n;i++){
            if(a[i]%2==0 && a[i]%6!=0){
                two.push_back(a[i]);
            }else if(a[i]%3==0 && a[i]%6!=0){
                three.push_back(a[i]);
            }else if(a[i]%2!=0 && a[i]%3!=0){
                rest.push_back(a[i]);
            }
        }
        for(int i=0;i<two.size();i++){
            ans.push_back(two[i]);
        }
        for(int i=0;i<rest.size();i++){
            ans.push_back(rest[i]);
        }
        for(int i=0;i<three.size();i++){
            ans.push_back(three[i]);
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}