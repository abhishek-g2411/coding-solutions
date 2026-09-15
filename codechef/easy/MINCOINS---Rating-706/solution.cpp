#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        // n / 2 is the number of even-indexed episodes
        // n - (n / 2) is the number of odd-indexed episodes
        int even_count = n / 2;
        int odd_count = n - even_count;
        
        int total_duration = (even_count * a) + (odd_count * b);
        cout << total_duration << "\n";
    }
    return 0;
}