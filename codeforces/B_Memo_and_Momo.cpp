#include <iostream>
using namespace std;

int main(){
    int a,b,k;
    cin>>a>>b>>k;
    if(a%k==0 && b%k==0 ){

        cout<<"Both"<<endl;
    
    }else if(a%k==0 && b%k!=0){

        cout<<"Memo"<<endl;
    }else if(a%k!=0 && b%k==0){

        cout<<"Momo"<<endl;
    }else if(a%k!=0 && b%k!=0){
        cout<<"No One"<<endl;
    }
    


}