#include <iostream>
#include <cctype> // For isupper() and tolower() functions
using namespace std;

int main() {
    string n, k;
    int j, p = 0, q = 0; // Initialize p and q to 0
    char m;
    
    cin >> n;
    j = n.length();

    // Count the number of uppercase and lowercase characters
    for (int i = 0; i < j; i++) {
        m = n[i];
        if (isupper(n[i])) {
            p++;
        } else {
            q++;
        }
    }

    // Convert to uppercase if there are more uppercase characters
    if (p > q) {
        for (int i = 0; i < j; i++) {
            k += toupper(n[i]); // Convert to uppercase
        }
    } else {
        for (int i = 0; i < j; i++) {
            k += tolower(n[i]); // Convert to lowercase
        }
    }

    // Output the result
    cout << k;
    
    return 0;
}
