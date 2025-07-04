#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i = 0, n, m, t, j = 0;
    cin >> n >> m;
    t = n + m;
    vector<int> a(n), b(m), c(t);

    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(i = 0; i < m; i++){
        cin >> b[i];
    }
    i = 0, j = 0;
    while(i < n || j < m){
        if(i < n && (j == m || a[i] < b[j])){
            c[i + j] = a[i];
            i++;   
        } else {
            c[i + j] = b[j];
            j++;
        }
    }

    for(i = 0; i < t; i++){
        cout << c[i] << " ";
    }
}
