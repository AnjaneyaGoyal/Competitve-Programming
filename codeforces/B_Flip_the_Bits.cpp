#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int count_0=0,count_1=0;
        vector<bool>flip(n,false);
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                count_0++;
            }else if(a[i]=='1'){
                count_1++;
            }
            if(count_0==count_1){
                flip[i]=true;
            }
        }
        bool check=false;
        bool pos=true;
        for(int i=n-1;i>=0;i--){
            if(!check){
                if(a[i]!=b[i] ){
                    if(flip[i]){
                        check^=true;
                    }else{
                        pos=false;
                        break;
                    }
                }
            }else{
                if(a[i]==b[i]){
                    if(flip[i]){
                        check^=true;
                    }
                    else{
                        pos=false;
                        break;
                    }
                }
            }
        }
        if(pos){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";   
        }
    }
    return 0;
}