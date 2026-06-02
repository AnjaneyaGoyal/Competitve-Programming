#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool helpher(int k,ll h,vector<ll>&a){
    ll sum=0;
    vector<ll>temp;
    for(int i=0;i<k;i++){
        temp.push_back(a[i]);
    }
    sort(temp.begin(),temp.end());
    for(int i=k-1;i>=0;i-=2){
        sum+=temp[i];
    }
    return sum<=h;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll h;
    cin>>n>>h;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=n;
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(helpher(mid,h,a)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}