#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Calculate the floor for each room (0-indexed floors)
        int floor_x = (x - 1) / 10;
        int floor_y = (y - 1) / 10;

        // Output the absolute difference between the floors
        cout << abs(floor_x - floor_y) << "\n";
    }

    return 0;
}