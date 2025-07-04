#include<bits/stdc++.h>
using namespace std;
int  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int i,j,n,m;
    cin>>n;

    if(n>=60){
        j=n-60;
    }else{
        j=n;
    }
    m=n/60;
    m=m+21;
    if(j<10){
        cout<<m<<":"<<0<<j;
    }else{
        cout<<m<<":"<<j;
    }
}
/*Parth's approach
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int k;
	cin>>k;
    if(k<60 && k>9)
        cout<<"21:"<<k;
    else if(k<10)   
        cout<<"21:0"<<k;
    else if(k-60<10)
        cout<<"22:0"<<k-60;
    else  
        cout<<"22:"<<k-60;

}
*/