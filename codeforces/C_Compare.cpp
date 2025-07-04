#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2) {
        cout << s1;
    } else if (s1 < s2) {
        cout << s1;
    } else {
        cout << s2;
    }

    return 0;
}
