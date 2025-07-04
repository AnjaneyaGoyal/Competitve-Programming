#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,steps;
    cin >> n;

    if(n%5==0){
        steps=n/5;
       
    }else{
        steps=n/5+1;
    }
    cout<<steps<<"\n";
    return 0;
}
