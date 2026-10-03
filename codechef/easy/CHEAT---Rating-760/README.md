# CHEAT - Rating 760

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Small Factorial

Write a program to find the factorial value of any number entered by the user.

### Input Format

The first line contains an integer  **T**, the total number of testcases. Then  **T**  lines follow, each line contains an integer  **N**.

### Output Format

For each test case, display the factorial of the given number  **N**  in a new line.

### Constraints
- 1 ≤ T ≤ 1000
- 0 ≤ N ≤ 20
### Sample 1:
Input
Output

```
3 
3 
4
5

```

```
6
24
120

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T19:36:14.458Z  

```c_cpp
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, res = 1;
        cin >> n;
        for(int i = 1; i <= n; i++) {
            res *= i;
        }
        cout << res << endl;
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CHEAT)