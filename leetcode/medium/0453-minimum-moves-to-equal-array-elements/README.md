# Minimum Moves to Equal Array Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of size `n`, return  *the minimum number of moves required to make all array elements equal*.

In one move, you can increment `n - 1` elements of the array by `1`.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: 3
Explanation: Only three moves are needed (remember each move increments two elements):
[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]

```

 **Example 2:** 

```
Input: nums = [1,1,1]
Output: 0

```

 

 **Constraints:** 

- n == nums.length
- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109
- The answer is guaranteed to fit in a 32-bit integer.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 31.9 MB (beats 96.96%)  
**Submitted:** 2026-11-01T22:09:35.986Z  

```cpp

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MAX;

        for(int n : nums)
            mini = min(mini, n);

        int moves = 0;

        for(int n : nums)
            moves += n - mini;

        return moves;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/)