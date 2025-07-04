#include <iostream>
using namespace std;

int main() {
    int n, q = 0; // Initialize q to 0
    cin >> n;

    int a[n];  // Array of size n

    // Read input and count non-zero elements
    for(int i = 0; i < n; i++) {
        cin >> a[i];  // Read the i-th element
        if(a[i] != 0) {
            q++;  // Increment q for each non-zero element
        }
    }

    // Output the result based on q
    if(q == 0) {  // Use comparison operator (==) instead of assignment
        cout << "EASY";
    } else {
        cout << "HARD";
    }

    return 0;
}
