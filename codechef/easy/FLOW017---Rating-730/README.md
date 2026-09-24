# FLOW017 - Rating 730

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Second Largest

Three numbers  **A**,  **B**  and  **C**  are the inputs. Write a program to find second largest among them.

### Input Format

The first line contains an integer  **T**, the total number of testcases. Then  **T**  lines follow, each line contains three integers  **A**,  **B**  and  **C**.

### Output Format

For each test case, display the second largest among  **A**,  **B**  and  **C**, in a new line.

### Constraints
- 1 ≤ T ≤ 1000
- 1 ≤ A,B,C ≤ 1000000
### Sample 1:
Input
Output

```
3 
120 11 400
10213 312 10
10 3 450
```

```
120
312
10
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-24T19:05:07.014Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        // Check which one is the second largest
        if ((A > B && A < C) || (A > C && A < B)) {
            cout << A << "\n";
        } 
        else if ((B > A && B < C) || (B > C && B < A)) {
            cout << B << "\n";
        } 
        else {
            cout << C << "\n";
        }
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FLOW017)