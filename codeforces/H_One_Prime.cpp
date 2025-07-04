#include <iostream>
using namespace std;
int main(){
    int n,p=0;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            p++;
        }
    }
    if(p>0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}