#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a,b=4,n,i;
    cin>>n;
    if((b%2+n%2)%2==0){
        a=b+n;
    }else{
        b=9;
        a=b+n;
    }
    cout<<a<<" "<<b<<"\n";  
}