#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<int> z;
        vector<bool> used(n + 1, false);

        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                z.insert(i + 1);
            }
        }

        ll cost = 0;

        for(int x : z){
            for(int y = x; y <= n; y += x){
                if(s[y-1] == '1') break;  
                if(!used[y]){
                    used[y] = true;
                    cost += x;
                }
            }
        }

        cout << cost << "\n";
    }
    return 0;
}
