# Diameter of Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the  **root**  of a binary tree, find the diameter of the binary tree. The diameter of a binary tree is defined as the number of edges on the  **longest** path between any two nodes. Note that this path may or may not pass through the root of the tree.

 **Examples:** 

```
Input: root = [1, 2, N, 3, 4]

Output: 2
Explanation: The longest path has 2 edges (node 3 -> node 2 -> node 4).

```

```
Input: root = [5, 8, 6, 3, 7, 9, N]

Output: 4
Explanation: The longest path has 4 edges (node 3 -> node 8 -> node 5 -> node 6 -> node 9).

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-22T16:37:52.841Z  

```cpp
/* Structure of binary tree Node 
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
private:
    int height(Node* root) {
        if (root == NULL)
            return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return 1 + max(leftHeight, rightHeight);
    }

public:
    int diameter(Node* root) {
        if (root == NULL)
            return 0;

        int op1 = diameter(root->left);
        int op2 = diameter(root->right);

        int op3 = height(root->left) + height(root->right);

        return max(op1, max(op2, op3));
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1)