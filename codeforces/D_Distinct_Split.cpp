#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> pref(n, 0), suff(n, 0);
        vector<int> cnt(26, 0), cnt1(26, 0);

        cnt[s[0] - 'a']++;
        pref[0] = 1;
        for(int i = 1; i < n; i++){
            cnt[s[i] - 'a']++;
            if(cnt[s[i] - 'a'] == 1)
                pref[i] = pref[i-1] + 1;
            else{
                pref[i] = pref[i-1];
            }
        }

        cnt1[s[n-1] - 'a']++;
        suff[n-1] = 1;
        for(int i = n-2; i >= 0; i--){   
            cnt1[s[i] - 'a']++;
            if(cnt1[s[i] - 'a'] == 1)
                suff[i] = suff[i+1] + 1; 
            else{
                suff[i] = suff[i+1];   
            }    
        }

        int ans = 0;
        for(int i= 0; i<n-1; i++){
            ans = max(ans, pref[i] + suff[i+1]);
        }
        cout << ans << "\n";
    }
}