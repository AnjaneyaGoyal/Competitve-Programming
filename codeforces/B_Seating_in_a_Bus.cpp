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
        set<int>s;
        s.insert(a[0]);
        bool check =true;
        for(int i=1;i<n;i++){
            if(s.find(a[i]-1)!=s.end() ||s.find(a[i]+1)!=s.end()){
                s.insert(a[i]);
            }else{
                check=false;
                break;
            }
        }
        if(check){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}