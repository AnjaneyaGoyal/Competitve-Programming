#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,n,i;
    cin>>t;
    while(t--){
        long long alice=0,bob=0;
        bool turna=true,turnb=true;
        int tooth=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        
        for (i = 0; i < n; i++) {
            if (tooth == 0) {  
                if (a[i] % 2 == 0) {
                    alice += a[i];
                }
                tooth = 1; 
            } else {  
                if (a[i] % 2 == 1) {
                    bob += a[i];
                }
                tooth = 0;  
            }
        }
        
        if (alice > bob) {
            cout << "Alice" << "\n";
        } else if (alice == bob) {
            cout << "Tie" << "\n";
        } else {
            cout << "Bob" << "\n";
        }
    }

    return 0;
}
