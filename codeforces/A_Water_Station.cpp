#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,k;
    
    cin>>n;
    k=n%5;

    if(k==0){
        cout<<n<<"\n";
    }else if(k<3)
    {
        cout<<n-k<<"\n";
    }else{
        cout<<n-k+5<<"\n";
    }

}