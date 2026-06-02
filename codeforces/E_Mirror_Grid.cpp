#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<string> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int cost = 0;
        int num=0;
        int mini;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == '1' && (i != n-1-i || j != n-1-j)){
                   int x[4] = { i,j,n-1-i,n-1-j };
                   int y[4] = { j,n-1-i,n-1-j,i};
                    mini=0;
                    num=0;
                    for(int k = 0; k < 4; k++){
                        if(x[k]< 0 || x[k]>= n || y[k]< 0 || (y[k]>= n && a[x[k]][y[k]]=='1')){
                            continue;
                        }
                        if(a[x[k]][y[k]] == '0'){
                            num++;
                        }
                    }
                    mini=min(num,4-num);
                    if(mini==num){
                        for(int k = 0; k < 4; k++){
                            if(x[k]< 0 || x[k]>= n || y[k]< 0 || (y[k]>= n && a[x[k]][y[k]]=='1')){
                                continue;
                            }
                            if(a[x[k]][y[k]] == '0'){
                                a[x[k]][y[k]]='1';
                            }
                        }
                    }else{
                        a[x[0]][y[0]]='0';
                    }
                    cost+=mini;
                } 
            }
        }

        cout << cost << "\n";
    }
    return 0;
}
