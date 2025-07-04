#include<bits/stdc++.h>
using namespace std;


int main(){
   /* ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    */
    int n,i=3,j=3;
    int a[3];
    cin>>n;
    for(n;n>0;n--){
        for(i;i>0;i--){
            cin>>a[i];
        }
        for(i;i>0;i--){
            if(a[0]>=a[2] && a[0]>=a[1]){
                if(a[1]==1 && a[2]==1){
                    cout<<"Yes"<<"\n";
                }else if(a[0]>a[1]+a[2]){
                    cout<<"Yes\n";
                }else{
                    cout<<"No\n";
                }
            }
            else{
                cout<<"No\n";
            }
        
        }
    }
}