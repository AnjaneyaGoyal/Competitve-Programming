#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,n,a,b,c,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            cout<<(n-1)/2<<" "<<(n-1)/2 +1<<" 1"<<"\n";
        }else{
            int cur=(n-1)/2;
            if(cur%2==0){
                cout<<cur-1<<" "<<cur+1<<" "<<"1"<<"\n";
            }else{
                cout<<cur-2<<" "<<cur+2<<" "<<"1"<<"\n";
            }
        }
    }
    return 0;
}