#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i+1;
            a[i].first%=k;
            if(!a[i].first){
                a[i].first=k;
            }
        }
        sort(a.begin(), a.end(), [](pair<int,int> &p1, pair<int,int> &p2){
            if(p1.first == p2.first) return p1.second < p2.second; 
            return p1.first > p2.first;
        });
        for(auto x:a){
            cout<<x.second<<" ";
        }
        cout<<"\n";
    }
    return 0;
}