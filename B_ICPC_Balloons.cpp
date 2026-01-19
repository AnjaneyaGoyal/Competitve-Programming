#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s[n];
        int a[26]={0};
        int ans=0;
        int l=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
            a[s[i]-'A']++;
            l=a[s[i]-'A'];
            if(l==1){
                ans+=2;
            }else{
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}