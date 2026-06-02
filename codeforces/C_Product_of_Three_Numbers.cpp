#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>s;
        for(int i=2;i*i<=n;i++){
            if(n%i!=0){
                continue;
            }
            s.push_back(i);
            n/=i;
            if(s.size()==2){
                break;
            }
        }
        if(n==1||s.size()<2||s[0]==n||s[1]==n){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
            cout<<s[0]<<" "<<s[1]<<" "<<n<<"\n";
        }
    }
    return 0;
}