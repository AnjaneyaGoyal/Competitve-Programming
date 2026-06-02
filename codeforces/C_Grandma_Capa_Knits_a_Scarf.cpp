#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int ans=INT_MAX;
        for(char c='a';c<='z';c++){
            int count=0;
            bool pos=true;
            int l=0,r=n-1;
            while(l<r){
                if(s[l]==s[r]){
                    l++;
                    r--;
                    continue;
                }

                if(s[l]==c){
                    l++;
                    count++;
                }else if(s[r]==c){
                    r--;
                    count++;
                }else{
                    pos=false;
                    break;
                }
            }
            if(!pos){
                count=INT_MAX;
            }
            ans=min(ans,count);
        }
        if(ans==INT_MAX){
            ans=-1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}