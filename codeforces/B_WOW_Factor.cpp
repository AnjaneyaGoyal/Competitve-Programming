/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.size();
    ll totalvv=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='v'&&s[i+1]=='v'){
            totalvv++;
        }
    }
    ll leftvv=0,right=0,ans=0;
    for(int i=0;i<n-1;i++){
        if(s[i+1]=='o'){
            right=totalvv-leftvv;
            ans+=leftvv*right;
        }

        if(s[i]=='v'&&s[i+1]=='v'){
            leftvv++;
        }
    } 
    cout<<ans<<"\n";
}

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.size();
    vector<vector<int>>dp(n+1,vector<int>(4,0));
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }

    for(int i=1;i<n;i++){
        if(s[i]=='v' &&s[i-1]=='v'){
            dp[i+1][1]+=dp[i-1][0];
            dp[i+1][3]+=dp[i-1][2];
        }else if (s[i]=='o'){
            dp[i+1][2]+=dp[i][1];
        }
        dp[i+1][1]+=dp[i][1];
        dp[i+1][2]+=dp[i][2];
        dp[i+1][3]+=dp[i][3];
    }
    cout<<dp[n][3]<<"\n";
    return 0;
}
