#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        vector<int> p(n);
        for (int i =0; i<n; i++) {
            cin>>p[i];
        }
        vector<int>s(n),pos(n);
        s[n-1] = p[n-1];
        pos[n-1] = n-1;

        for (int i=n-2;i>=0;i--) {
            if (p[i]>s[i+1]) {
                s[i]=p[i];
                pos[i]=i;
            } else {
                s[i]=s[i+1];
                pos[i]=pos[i+1];
            }
        }

        for (int i=0;i<n;i++) {
            if (p[i] != s[i]) {
                reverse(p.begin()+i, p.begin()+pos[i]+1);
                break;
            }
        }

        for (int i=0;i<n;i++){
            cout<<p[i]<< " ";
        }
        cout <<"\n";
    }
    return 0;
}
