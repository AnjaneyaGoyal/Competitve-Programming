#include<bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (int i = 2; i<= sqrt(n); i++) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isodd(int n) {
    if(n<=1){
        return false;
    }
    if(n % 2 == 1){
        return true;

    }
}

bool iseven(int n) {
    if(n<=1){
        return false;
    }
    if(n % 2 == 0){
        return true;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t = 0, k = 0, count = 0, j = 0;
    cin >> n;

    int a[n];  
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ar[2 * n - 1] = {0};  

    for (int i = 0; i < n - 1; i++) {  
        if (__gcd(a[i], a[i + 1]) != 1 && j + 2 <= 2 * n - 1) {
            ar[j] = a[i];
            ar[j + 2] = a[i + 1];
            j += 2;  
        } else {
            ar[j] = a[i];
            j++;
        }
    }
    ar[j] = a[n - 1]; 
   
    for(int i=0;i<2*n-3;i++){
        if(ar[i]>0 && ar[i+2]>0&&ar[i+1]==0){
            ar[i+1]=1;
            count++;
        }
    }

    for (int i = 0; i < 2 * n - 1; i++) {
        if (ar[i] == 0) {
            k++;
        }
    }


    int arr[2 * n - k - 1];
    for (int i = 0; i < 2 * n - 1; i++) {
        if (ar[i] != 0) {
            arr[t] = ar[i];
            t++;
        }
    }

   
    cout << count << "\n";
    for (int i = 0; i < 2 * n - k - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}


