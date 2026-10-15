# Permutations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 **Example 2:** 

```
Input: nums = [0,1]
Output: [[0,1],[1,0]]

```

 **Example 3:** 

```
Input: nums = [1]
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.5 MB (beats 70.35%)  
**Submitted:** 2026-10-15T20:48:43.019Z  

```cpp
class Solution {
public:

    void getPermutations(vector<int>& nums, int index,
                         vector<vector<int>>& ans) {

        // Base case
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Try every element from index onwards
        for (int i = index; i < nums.size(); i++) {

            // Choose
            swap(nums[index], nums[i]);

            // Explore
            getPermutations(nums, index + 1, ans);

            // Undo choice
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;

        getPermutations(nums, 0, ans);

        return ans;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/permutations/)