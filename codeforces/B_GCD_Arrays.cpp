#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        int i,l, r,p=0,k,odd_count=0;
        cin >> l >> r >> k;
        int size=r-l+1; 
        if (l == r && k==0){

            if (l > 1) {
                cout << "YES\n"; 
            } else {
                cout << "NO\n";  
            }
            continue;
        }
      
        odd_count=(r-l+1);
        if(odd_count%2==1){
            odd_count/=2;
            if(l%2==1 || r%2==1){
                odd_count++;
            }
        }else{
            odd_count/=2;
        }

        if (odd_count <= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
