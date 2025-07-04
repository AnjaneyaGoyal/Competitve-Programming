#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m,i;
    cin>>n;
    while(n--){
        cin>>m;
        int a[m];
        int sum=0,ans=INT_MAX,count=0,steps=0,odd=0;
        for(i=0;i<m;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2!=0){
                odd++;
            }
        }
        if(sum%2==0){
            cout<<count<<"\n";
        
        }else{
            for(i=0;i<m;i++){
                int steps=0;
                if(a[i]%2==0){
                     while(a[i]>0 && a[i]%2==0 ){
                        steps++;
                        a[i]=a[i]/2;
                    }
                }else{
                    while(a[i] % 2 != 0){
                        steps++;
                        a[i]=a[i]/2;
                    }
                }
                ans=min(steps,ans);
            }
            cout<<ans<<"\n";

        }
    }
    return 0;
}

