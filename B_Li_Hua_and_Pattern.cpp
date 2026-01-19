#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        ll diff=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] !=a[n-1-i][n-1-j]){
                    diff++;
                }
            }
        }
        diff/=2;
        if(diff>k){
            cout<<"NO"<<"\n";
        }else{
            int left=k-diff;
            if(n%2==0){
                if(left%2==0){
                    cout<<"YES"<<"\n";
                }else{
                    cout<<"NO"<<"\n";
                }
            }else{
                cout<<"YES"<<"\n";
            }
        }
    }
    return 0;
}