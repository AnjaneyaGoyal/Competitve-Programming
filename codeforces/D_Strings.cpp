#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s1,s2,s3;
    char c;
    int i;
    cin>>s1>>s2;
    cout<<s1.size()<<" "<<s2.size()<<"\n";
    for(i=0;i<s1.size();i++){
        s3.push_back(s1[i]);
    }
    for(i=0;i<s2.size();i++){
        s3.push_back(s2[i]);
    }
    cout<<s3<<"\n";
    //swap
    c=s1[0];
    s1[0]=s2[0];
    s2[0]=c;
    cout<<s1<<" "<<s2<<"\n";
    return 0;
}