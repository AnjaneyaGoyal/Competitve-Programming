#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        int ans1 = 0, ans2 = 0;
        {
            long long d = a, c = b;
            long long t1 = 1, t2 = 2;
            int cnt = 0;

            while(true){
                if(d < t1) break;
                d -= t1;
                cnt++;

                if(c < t2) break;
                c -= t2;
                cnt++;

                t1 *= 4;
                t2 *= 4;
            }
            ans1 = cnt;
        }
        {
            long long d = b, c = a;
            long long t1 = 1, t2 = 2;
            int cnt = 0;

            while(true){
                if(d < t1) break;
                d -= t1;
                cnt++;

                if(c < t2) break;
                c -= t2;
                cnt++;

                t1 *= 4;
                t2 *= 4;
            }
            ans2 = cnt;
        }

        cout << max(ans1, ans2) << "\n";
    }
    return 0;
}
