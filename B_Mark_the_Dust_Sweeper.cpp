#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n,m,i,j,o,k,z=0,t=0;
    cin >> n;
    while (n--) {
        cin >> m;
        int a[m];  

        for (int j = 0; j < m; j++) {
            cin >> a[j];
        }
    
        
        t = 0; 
        
        for(int i=0;i<m;i++){
            if(a[i]==0)
            {
                z++;
            }
            
        }
    
        for (int o=0;o<z;o++){
            for (int j = m - 1; j > 0; j--) {
                if (a[j] == 0 && a[j - 1] > 0) {
                    if(a[j]==0 && a[j-1]==1){
                    a[j]++;
                    a[j-2]--;
                    t++;
                    }
                    a[j]++;
                    a[j - 1]--;
                    t++;
                }
                
            }
        }

    
        for (int k = 0; k < m - 1; k++) {
            t += a[k];
        }

        cout << t << "\n";
    }

    return 0;
}
