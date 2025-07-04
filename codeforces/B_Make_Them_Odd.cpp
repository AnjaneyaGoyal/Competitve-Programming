
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, i, j, steps;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        set<int>st;
        for(i=0;i<n;i++){
            while(a[i]%2==0){
                st.insert(a[i]);
                a[i]/=2;
            }
        }
        cout<<st.size()<<"\n";
      
    }
    return 0;
}





