#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,b;
        cin>>n>>b;
        string s;
        int count=0;
        int a[26]={0};
        cin>>s;
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]%2==1){
                count++;
            }
        }
        if(count<=b+1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}