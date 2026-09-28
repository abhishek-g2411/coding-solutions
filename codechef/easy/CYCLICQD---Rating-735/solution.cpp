#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    // A quadrilateral is cyclic if the sum of opposite angles is 180.
    if (a + c == 180) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    
    
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}