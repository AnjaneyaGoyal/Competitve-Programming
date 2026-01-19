#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        set<char>c;
        int n=a.size();
        bool check =true;
        int i;
        for(i=0;i<n;i++){
            if(c.find(a[i])==c.end()){
                c.insert(a[i]);
            }else{
                break;
            }
        }
        for(int j=i;j<n;j++){
            if(a[j]!=a[j-i]){
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