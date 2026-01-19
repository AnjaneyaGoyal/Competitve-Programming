#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0,r=n-1;
        bool check =true;
        bool check1=true;
        while(l<r){
            if(a[l]!=a[r]){
                break;
            }
            l++;
            r--;
        }
        if(l==r){
            cout<<"YES"<<"\n";
            continue;
        }else{
            int x=a[l],y=a[r];
            vector<int>b;
            for(int i=0;i<n;i++){
                if(a[i]==x){
                    continue;
                }
                b.push_back(a[i]);
            }
            int p=b.size();
            for(int i=0;i<p;i++){
                if(b[i]!=b[p-1-i]){
                    check =false;
                }
            }
            vector<int>k;
            for(int i=0;i<n;i++){
                if(a[i]==y){
                    continue;
                }
                k.push_back(a[i]);
            }
            int d=k.size();
            for(int i=0;i<d;i++){
                if(k[i]!=k[d-1-i]){
                    check1 =false;
                }
            }
        }

        if(check || check1){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}