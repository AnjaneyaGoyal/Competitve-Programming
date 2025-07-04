#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,i,poscount=0,negcount=0,steps=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i] != -1){
                poscount++;
            }else{
                negcount++;
            }
        }
        if(poscount==negcount&&negcount%2==0){
            steps=0;
        }else if(poscount<=negcount && negcount%2==0){
            steps=negcount-poscount;
        }else if(poscount<=negcount && negcount%2==1){
            steps=(negcount-poscount);
        }else if(negcount<=poscount && negcount%2==1){
            steps=1;
        }
        cout<<steps<<"\n";
    }
}
