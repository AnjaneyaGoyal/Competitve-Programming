#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mini=a;
    if (mini>b){
        mini=b;
    }
    if (mini>c){
        mini=c;
    }
    int maxi= a;
    if (maxi < b){
        maxi=b;

    }
    if(maxi<c){
        maxi=c;
    }

    cout<<mini<<" "<<maxi<<endl;


    }



