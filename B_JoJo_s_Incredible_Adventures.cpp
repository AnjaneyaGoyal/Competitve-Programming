#include<bits/stdc++.h>
using namespace std;
# define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n=s.size();
        ll i=0,count=0;
        ll maxi=0;
        while(i<n){
            if(s[i]=='0'){
                i++;
                continue;
            }
            int j=i+1;
            while(j<n && s[j]=='1'){
                j++;
            }
            maxi=max(maxi,j-i);
            i=j;
        }
        if(maxi==n){
            cout<<n*n<<"\n";
            continue;
        }
        if(s[0]=='1'&& s[n-1]=='1'){
            ll i=0;
            ll cnt=0;
            while(i<n && s[i]=='1'){
                i++;
                cnt++;
            }
            int j=n-1;
            while(i<j && s[j]=='1'){
                j--;
                cnt++;
            }
            maxi=max(maxi,cnt);
        }
        maxi++;
        cout<<((maxi+1)/2)*((maxi)/2)<<"\n";
    }
    return 0;
}