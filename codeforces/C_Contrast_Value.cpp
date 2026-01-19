#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int count=2;
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b;
        unordered_set<int>s;
        int k=-1,c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(k!=a[i]){
                c++;
            }
            k=a[i];
        }
        b.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i] != a[i-1]){
                b.push_back(a[i]);
            }
        }
        if(c>1){
            for(int i=0;i<b.size();i++){
                if(i+2<b.size() && b[i]>b[i+1] && b[i+1]<b[i+2]){
                    count++;
                }
                if(i+2<b.size()&& b[i]<b[i+1] && b[i+1]>b[i+2]){
                    count++;
                }
            }
        }else{
            cout<<1<<"\n";
            continue;
        }
        cout<<count<<"\n";
    }
    return 0;
}