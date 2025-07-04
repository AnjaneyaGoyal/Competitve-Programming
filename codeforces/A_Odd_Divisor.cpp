#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    long long i;
    cin >> n;
    while (n--) {
        cin >> i;
        while(i%2==0){
            i=i/2;
        }
        if(i==1){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
