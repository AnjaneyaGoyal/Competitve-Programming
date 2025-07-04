#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,i;
    cin>>n;
    set<pair<string,string>>v;
    string s1,s2;
    for(i=0;i<n;i++)
    {   
        cin>>s1>>s2;

        v.insert(make_pair(s1,s2));


    }
    cout<<v.size();
}