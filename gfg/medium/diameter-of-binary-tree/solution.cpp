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