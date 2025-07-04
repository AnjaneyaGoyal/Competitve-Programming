#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,m,i,j,t;
    cin>>n;
    while(n--){
        cin>>m;
        int arr[m+1];
        int cnt[101];
        for(i=0;i<101;i++){
            cnt[i]=0;
        }
        for(i=1;i<=m;i++){
            cin>>arr[i];
            cnt[arr[i]]++;
        }
        int mexa = 0;
        while(cnt[mexa]>=1){
            mexa++;
        }  
        int mexb = 0;
        while(cnt[mexb]>=2){
            mexb++;
        }  

        cout<< mexa + mexb <<"\n";
    }
    return 0;
}