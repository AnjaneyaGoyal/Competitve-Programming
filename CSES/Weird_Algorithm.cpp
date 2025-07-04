#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long q;
    cin>>q;
    while(true){
        cout<<q<<" ";
        if(q==1){break;}
        if(q%2==1){
            q=q*3+1;
        }else{
            q/=2;
        }
    }
}