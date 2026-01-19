#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    vector<int>b(q);
    vector<int>idx(51,n+2);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(idx[a[i]]>=i){
            idx[a[i]]=i;
        }
    }
    for(int i=0;i<q;i++){
        cin>>b[i];
    }
    for(int i=0;i<q;i++){
        cout<<idx[b[i]]+1<<" ";
        for(int j=0;j<51;j++){
            if(idx[b[i]]>idx[j]){
                idx[j]++;
            }
        }
        idx[b[i]]=0;
    }
    cout<<"\n";
    return 0;
}