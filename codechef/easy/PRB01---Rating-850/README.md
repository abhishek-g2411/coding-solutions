# PRB01 - Rating 850

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Primality Test

Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not.

Note that 1 is not a prime number.

### Input

The first line of the input contains an integer T, the number of testcases. T lines follow.

Each of the next T lines contains an integer N which has to be tested for primality.

### Output

For each test case output in a separate line, "yes" if the number is prime else "no."

### Constraints
- 1 ≤ T ≤ 20
- 1 ≤ N ≤ 100000
### Sample 1:
Input
Output

```
5
23
13
20
1000
99991
```

```
yes
yes
no
no
yes
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T18:02:03.485Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int t, n;

int main() {
    // Precompute primes up to the maximum possible value of N (100000)
    bool prime[100000 + 1];
    memset(prime, true, sizeof(prime));
    prime[1] = false; // 1 is not a prime number
  
    for (int p = 2; p * p <= 100000; p++) {
        if (prime[p] == true) {
            for (int i = 2 * p; i <= 100000; i += p)
                prime[i] = false;
        }
    }

    // Read number of test cases
    cin >> t;
    while(t--) {
        cin >> n;
        if(prime[n])
            cout << "yes\n";
        else
            cout << "no\n";
    }
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PRB01)