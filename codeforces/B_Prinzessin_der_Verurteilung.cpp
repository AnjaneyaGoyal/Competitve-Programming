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
        string s;
        cin >> s;

        unordered_set<string> st;

        for (int i = 0; i < n; i++) {
            st.insert(s.substr(i, 1));
            if (i + 1 < n){
                st.insert(s.substr(i, 2));
            }
            if (i + 2 < n){
                st.insert(s.substr(i, 3));
            }
        }
        bool found = false;
        for (char c = 'a'; c <= 'z' && !found; c++) {
            string x(1, c);
            if (!st.count(x)) {
                cout << x << "\n";
                found = true;
            }
        }
        for (char c1 = 'a'; c1 <= 'z' && !found; c1++) {
            for (char c2 = 'a'; c2 <= 'z' && !found; c2++) {
                string x;
                x.push_back(c1);
                x.push_back(c2);
                if (!st.count(x)) {
                    cout << x << "\n";
                    found = true;
                }
            }
        }
        for (char c1 = 'a'; c1 <= 'z' && !found; c1++) {
            for (char c2 = 'a'; c2 <= 'z' && !found; c2++) {
                for (char c3 = 'a'; c3 <= 'z' && !found; c3++) {
                    string x;
                    x.push_back(c1);
                    x.push_back(c2);
                    x.push_back(c3);
                    if (!st.count(x)) {
                        cout << x << "\n";
                        found = true;
                    }
                }
            }
        }
    }

    return 0;
}
