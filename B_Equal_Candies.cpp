#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,n,sum=0,i;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++){
            if(a[0] != a[i]){
                a[i]=a[i]-a[0];
                sum+=a[i];
            }
        }
       
        cout<<sum<<"\n";
    }
}