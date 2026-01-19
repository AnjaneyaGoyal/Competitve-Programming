#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t = s;
    vector<int> ansW;
    for (int i = 0; i < n - 1; i++) {
        if (t[i] != 'W') {
            t[i] = (t[i] == 'W' ? 'B' : 'W');
            t[i+1] = (t[i+1] == 'W' ? 'B' : 'W');
            ansW.push_back(i + 1);
        }
    }
    if (t[n-1] == 'W') {       
        cout << ansW.size() << "\n";
        for (int x : ansW) cout << x << " ";
        return 0;
    }
     t = s;                   
    vector<int> ansB;

    for (int i = 0; i < n - 1; i++) {
        if (t[i] != 'B') {
            t[i] = (t[i] == 'W' ? 'B' : 'W');
            t[i+1] = (t[i+1] == 'W' ? 'B' : 'W');
            ansB.push_back(i + 1);
        }
    }

    if (t[n-1] == 'B') {        
        cout << ansB.size() << "\n";
        for (int x : ansB) cout << x << " ";
        return 0;
    }
    cout << -1;
    return 0;
}