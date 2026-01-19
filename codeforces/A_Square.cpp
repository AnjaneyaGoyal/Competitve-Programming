#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        bool check =true;
        for(int i=0;i<4;i++){
            if(a[0]!=a[i]){
                check=false;
            }
        }
        if(check){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}