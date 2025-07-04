#include <bits/stdc++.h>
using namespace std;

int main ( ){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int i,j,n,m,steps;
    int a[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]==1){
                n=i,m=j;
            }
        }
    }
    steps=abs(2-n)+ abs(2-m);
    cout<<steps<<"\n";
    return 0;
}