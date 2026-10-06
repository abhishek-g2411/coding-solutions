# SINGLEUSE - Rating 777

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Single-use Attack

Chef is playing a video game, and is now fighting the final boss.

The boss has $H$ health points. Each attack of Chef reduces the health of the boss by $X$.
Chef also has a special attack that can be used  **at most once**, and will decrease the health of the boss by $Y$.

Chef wins when the health of the boss is $\leq 0$.
What is the  **minimum**  number of attacks needed by Chef to win?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case will contain three space-separated integers $H, X, Y$ — the parameters described in the statement.
### Output Format

For each test case, output on a new line the minimum number of attacks needed by Chef to win.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq X \lt Y \leq H \leq 100$
### Sample 1:
Input
Output

```
4
100 25 40
100 29 45
46 1 2
78 15 78

```

```
4
3
45
1

```

### Explanation:

 **Test case $1$:**  Chef can attack the boss $4$ times normally. This results in $25 + 25 + 25 + 25 = 100$ damage, which is enough to defeat the boss.

 **Test case $2$:**  Chef can attack the boss $2$ times normally, then use the special attack. This results in $29 + 29 + 45 = 103$ damage, which is enough to defeat the boss.

 **Test case $3$:**  Chef can proceed as follows:

- First, use the special attack. This leaves the boss with $46 - 2 = 44$ health.
- Then, use $44$ normal attacks to defeat the boss, since each one does $1$ damage.

This takes a total of $44 + 1 = 45$ attacks.

 **Test case $4$:**  Chef can use the special attack to immediately bring the health of the boss to zero, hence only needing one attack.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T19:01:45.534Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/SINGLEUSE)