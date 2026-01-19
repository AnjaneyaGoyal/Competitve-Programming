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
        int sum=0,i;
        vector<int>a;
        for(i=0;i<n;i++){
            if(s[i]=='0'){
               sum+=1;
               a.push_back(i); 
            }
        }
        cout<<sum<<"\n";
        for(i=0;i<sum;i++){
            cout<<a[i]+1<<" ";
        }
        cout<<"\n";
    }
    return 0;

}
