#include<bits/stdc++.h>
using namespace std;
bool isprime(long long num){
    if(num==2){
        return true;
    }else{
        for(long long z=2;z<=sqrt(num);z++){
            if(num%z==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n,ne;
    long long i,j,l,minimizer=1e9+3;
    cin>>n;
    while(n--){
        cin>>i>>j;
        long long minima=(i-j);
        ne=(j+i);
        if(isprime(ne) && minima==1){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}