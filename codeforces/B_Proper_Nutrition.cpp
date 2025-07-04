/*DID'NT SLEPT AT NIGHT*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    float n,a,b,j,i;
    cin>>n>>a>>b;
    if(n>=a&&n>=b){
        for(i=0;i<n;i++){
            j=(n-a*(i))/b;
            int z=j;
            int y=i;
            if(j-z==0 && y-i==0 && z>=0){
                cout<<"YES"<<"\n";
                cout<<y<<" "<<z<<"\n";
                break;
            }
            if(i==n-1){
                cout<<"NO"<<"\n";
            }
        }
    }else if (n>=a&& n<b){
        int y=0;
        i=n/a;
        int z=i;
        if(i-z==0 && z>=0){
            cout<<"YES"<<"\n";
            cout<<z<<" "<<y<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }else if(n>=b&&n<a){
        int y=0;
        j=(n-a*(i))/b;
        int z=j;
        if(j-z==0 && z>=0){
            cout<<"YES"<<"\n";
            cout<<y<<" "<<z<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}
