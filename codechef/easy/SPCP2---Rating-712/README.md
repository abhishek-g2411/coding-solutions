# SPCP2 - Rating 712

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Airlines

An airline operates $X$ aircraft every day. Each aircraft can carry up to $100$ passengers.
One day, $N$ passengers would like to travel to the same destination. What is the minimum number of new planes that the airline must buy to carry all $N$ passengers?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line containing two space-separated integers $X$ and $N$ — the number of aircraft the airline owns and the number of passengers travelling, respectively.
### Output Format
- For each test case, output the minimum number of planes the airline needs to purchase.
### Constraints
- $1 \leq T \leq 1000$
- $1 \leq X \leq 10^6$
- $1 \leq N \leq 10^6$
### Sample 1:
Input
Output

```
3
4 600
3 523
8 245
```

```
2
3
0
```

### Explanation:

 **Test case $1$:**  The airline needs at least $6$ planes to carry $600$ passengers. They already have $4$, so they must purchase $2$ more.

 **Test case $2$:**  The airline needs at least $6$ planes to carry $523$ passengers. They already have $3$, so they must purchase $3$ more.

 **Test case $3$:**  The airline needs at least $3$ planes to carry $245$ passengers. They already have $8$, so there's no need to purchase any more.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-19T21:08:33.092Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, n;
    cin >> x >> n;
    
    // Total capacity they currently have
    long long current_capacity = x * 100;
    
    // If they can already carry all passengers
    if (current_capacity >= n) {
        cout << 0 << "\n";
    } else {
        // Passengers left over after filling existing planes
        long long remaining_passengers = n - current_capacity;
        
        // Calculate the ceiling division of remaining_passengers / 100
        // (remaining_passengers + 99) / 100 is a standard way to do ceiling division with integers
        long long needed_planes = (remaining_passengers + 99) / 100;
        
        cout << needed_planes << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SPCP2)