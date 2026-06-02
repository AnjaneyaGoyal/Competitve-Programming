#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<long long> a(n);

        long long total = 0;

        for(int i=0;i<n;i++){
            cin >> a[i];
            total += a[i];
        }

        vector<long long> suf(n);

        suf[n-1] = a[n-1];

        for(int i=n-2;i>=0;i--){
            suf[i] = min(a[i],suf[i+1]);
        }

        long long stay = 0;

        for(int i=0;i<n;i++){
            stay += suf[i];
        }

        long long ans = total - stay;

        for(int i=0;i<n;i++){

            if(a[i] == 0){
                continue;
            }

            vector<long long> b = a;

            b[i]--;

            long long newtotal = total - 1;

            vector<long long> newsuf(n);

            newsuf[n-1] = b[n-1];

            for(int j=n-2;j>=0;j--){
                newsuf[j] = min(b[j],newsuf[j+1]);
            }

            long long newstay = 0;

            for(int j=0;j<n;j++){
                newstay += newsuf[j];
            }

            ans = max(ans,newtotal - newstay);
        }

        cout << ans << "\n";
    }

    return 0;
}