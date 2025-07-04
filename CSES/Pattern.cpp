#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
        cout<<"*";}
    cout<<"\n";
    for(int k=0;k<n-2;k++){
        for(int j=0;j<n-2-k ;j++){
            cout<<" ";}
     cout<<"*"<<"\n";}
            
    for(int t=0;t<n;t++){
        cout<<"*";
    }

            
	
}