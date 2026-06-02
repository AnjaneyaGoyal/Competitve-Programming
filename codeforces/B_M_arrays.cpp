#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>r(m);
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            r[a[i]%m]++;
        }
        for(int i=0;i<m;i++){
            int x=r[i],y=r[(m-i)%m];
            if(x==0 &&y==0){
                continue;
            }
            int tmp=min(x,y);
            x-=min(tmp+1,x);
            y-=min(tmp+1,y);

            count++;
            count+=(x+y);
            r[i]=0;
            r[(m-i)%m]=0;
        }
        cout<<count<<"\n";
    }
    return 0;
}