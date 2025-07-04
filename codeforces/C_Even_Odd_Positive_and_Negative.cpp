#include <iostream>
using namespace std;

int main(){
    int n,even=0, odd=0,pos=0,neg=0,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val%2 == 0){
            even++;
        }else{
            odd++;
        }
        if(val<0){
            neg++;
        }else if(val>0){
            pos++;
        }

    }
    cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<pos<<endl<<"Negative: "<<neg<<endl;

}