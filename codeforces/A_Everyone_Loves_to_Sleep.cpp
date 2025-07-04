#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,n,m,o,i,j,a,b,minima,hour;
    cin>>t;
    while(t--){
        cin>>n>>m>>o;
        int total_min=m*60+o;
        j=1e9;
        
        for(i=0;i<n;i++){
            cin>>a>>b;
            int alarm_time= a*60+b;
            int difference = alarm_time-total_min;
            if(difference<0)
            {
                difference+=1440;
            }

            j= min(j,difference);
        }
        cout<<j/60<<" "<<j%60<<"\n";
    }
}