#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n=5;
    int a[n]={5,44,44,56,77,89};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]==a[j]){
                for(int k=j+1;k<5;k++){
                    a[k-1]=a[k];
                }
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<"\n";
    }
    
}
