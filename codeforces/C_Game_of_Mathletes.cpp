#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        
        int l=0, r=n-1, count=0;
        while(l < r){
            int sum = a[l] + a[r];
            if(sum == k){
                count++;
                l++;
                r--;   
            }
            else if(sum < k){
                l++;
            }
            else {
                r--;
            }
        }
        cout << count << "\n";
    }
}
