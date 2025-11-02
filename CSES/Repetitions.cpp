#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int maxi=1;
    int sum=1;
    for(int i=0;i<s.length()-1;i++){
        char c =s[i];
        if(s[i]==s[i+1]){
            sum++;
            maxi=max(maxi,sum);
        }else{
            sum=1;
        }
    }
    cout<<maxi<<"\n";
}