#include <bits/stdc++.h>
using namespace std;

void solve() {
    int X, Y;
    cin >> X >> Y;
    
    // Order 1: A then B
    // Points for A solved at minute X, points for B solved at minute (X + Y)
    int scoreAB = (500 - X * 2) + (1000 - (X + Y) * 4);
    
    // Order 2: B then A
    // Points for B solved at minute Y, points for A solved at minute (X + Y)
    int scoreBA = (1000 - Y * 4) + (500 - (X + Y) * 2);
    
    // Output the maximum of the two possible scores
    cout << max(scoreAB, scoreBA) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}