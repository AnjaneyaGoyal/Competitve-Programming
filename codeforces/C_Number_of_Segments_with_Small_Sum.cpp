#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read number of elements and maximum allowed sum
    int n;
    ll s;
    cin >> n >> s;

    // We use 1-based indexing, so make size n+1
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];  // Read each element into the array
    }

    ll ans = 0;      // This will store the total count of good segments
    int r = 1;       // Right end of our window starts at 1
    ll sum = 0;      // Current sum of the window from l to r-1

    // Move the left end of the window from 1 to n
    for (int l = 1; l <= n; l++) {
        // Try to stretch the window to the right as far as possible
        while (r <= n && sum + a[r] <= s) {
            sum += a[r];  // If adding this element keeps us under s, include it
            r++;          // Move the right end one step further
        }

        // Now, all subarrays starting at l and ending before r are valid
        // Their count is (r - l)
        ans += (r - l);

        // Before moving l forward, remove a[l] from sum
        // This shrinks the window from the left
        sum -= a[l];
    }

    // Print the total number of good segments
    cout << ans << '\n';
    return 0;
}
