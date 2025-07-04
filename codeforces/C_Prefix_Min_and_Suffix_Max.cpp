#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n,i,max2=-1,min2=INT_MAX;
        cin>>n;
        vector<long long int>a(n),b(n),c(n);
        for(i=0;i<n;i++){
            cin>>a[i];  
        }
        for(i=0;i<n;i++){
            if(a[n-i-1]>max2 ){
                max2=a[n-i-1];
            }
            b[n-i-1]=max2;
            if(a[i]<min2){
                min2=a[i];
            }
            c[i]=min2;
        }
        b[n-1]=a[n-1];
        c[0]=a[0];

        for(i=0;i<n;i++){
            if(a[i]==b[i] || a[i]==c[i] ){
                cout<<"1";
            }else{
                cout<<"0";
            }
        }
        cout<<"\n";
    }
}