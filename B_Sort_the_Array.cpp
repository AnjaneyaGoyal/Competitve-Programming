#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], sorted_a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sorted_a[i] = a[i];  
    }


    sort(sorted_a, sorted_a + n);

    if (equal(a, a + n, sorted_a)) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;  
        return 0;
    }

    int start = 0;
    while (a[start] == sorted_a[start]) {
        start++;
    }

    int end = n - 1;
    while (a[end] == sorted_a[end]) {
        end--;
    }
    reverse(a + start, a + end + 1);


    if (equal(a, a + n, sorted_a)) {
        cout << "yes" << endl;
        cout << start + 1 << " " << end + 1 << endl; 
    } else {
        cout << "no" << endl;
    }

    return 0;
}
