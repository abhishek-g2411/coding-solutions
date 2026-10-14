
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int mn = INT_MAX, mx = INT_MIN;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);
        }

        if (N == 2)
            cout << 0 << endl;
        else
            cout << mx - mn - min(mx - mn, min(mx - mn, 1)) << endl;
    }

    return 0;
}
