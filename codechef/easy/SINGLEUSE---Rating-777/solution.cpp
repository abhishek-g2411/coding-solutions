#include <bits/stdc++.h>
using namespace std;

void solve() {
    int H, X, Y;
    cin >> H >> X >> Y;
    
    // Remaining health after using the special attack once
    int remaining_health = H - Y;
    
    // Calculate normal attacks needed using ceiling division: ceil(A / B) = (A + B - 1) / B
    int normal_attacks = (remaining_health + X - 1) / X;
    
    // Total attacks = 1 (special attack) + normal attacks
    int total_attacks = 1 + normal_attacks;
    
    cout << total_attacks << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}