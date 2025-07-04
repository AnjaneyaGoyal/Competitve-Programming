#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,l,i,max=0;
        cin>>n>>l;
        int a[n+2];
        a[0]=0;
        a[n+1]=l;
        for(i=1;i<n+1;i++){
            cin>>a[i];
        }
        for(i=0;i<n+2;i++){
            if(2*(a[n+1]-a[n])>(a[i]-a[i-1]) && i<n+1 && max<2*(a[n+1]-a[n])){
                max= 2*(a[n+1]-a[n]);
            }else{
                if(max<(a[i]-a[i-1])){
                    max=a[i]-a[i-1];
                }
            }
        }
        cout<<max<<"\n";

    }

}