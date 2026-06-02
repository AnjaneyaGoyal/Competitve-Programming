#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int z = 0, o = 0;
        for(char c : s){
            if(c == '0') z++;
            else o++;
        }
        int len = 0;
        for(char c : s){
            if(c == '0'){
                if(o > 0){
                    o--;
                    len++;
                } else break;
            } else {
                if(z > 0){
                    z--;
                    len++;
                } else break;
            }
        }

        cout << s.size() - len << "\n";
    }
}