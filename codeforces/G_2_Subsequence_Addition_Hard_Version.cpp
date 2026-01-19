#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>c(n);
        ll sum=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>c[i];
            sum+=c[i];
        }
        sort(c.begin(),c.end());
        ll maxsum=1;
        if(c[0]!=1){
            cout<<"NO"<<"\n";
            continue;
        }
        for(int i=1;i<n;i++){
            if(c[i]>maxsum){
                break;
            }else{
                maxsum+=c[i];
            }
        }
        if(sum==maxsum){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}