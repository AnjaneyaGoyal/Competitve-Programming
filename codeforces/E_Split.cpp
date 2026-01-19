#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>freq;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            freq[v[i]]++;
        }
        bool pos=true;
        for(auto &x:v){
            if(freq[x]%k)pos=false;
        }
        if(!pos){
            cout<<"0"<<"\n";
            continue;
        }
        ll ans=0;
        map<int,int>mp;
        int l=0,r=-1;
        for(int l=0;l<n;l++){
            if(r<l-1){
                r=l-1;
            }
            while(r<n-1){
                if(mp[v[r+1]]<freq[v[r+1]]/k){
                    mp[v[r+1]]++;
                    r++;   
                }else{
                    break;
                }
            }
            ans+=(r-l+1);
            mp[v[l]]--;
        }
        cout<<ans<<"\n";
    }
    return 0;
}