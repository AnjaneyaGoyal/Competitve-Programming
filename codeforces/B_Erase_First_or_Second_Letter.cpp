#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        map<char,int>freq;
        vector<int>distinct(n,0);
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            if(freq[s[i]]==1){
                count++;
            }
            distinct[i]=count;
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            ans+=distinct[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}