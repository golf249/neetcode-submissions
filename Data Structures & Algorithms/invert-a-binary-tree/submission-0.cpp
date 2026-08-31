/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> s{};

        if (!root) return root;           // for empty root case

        s.push(root);

        while (!s.empty()) {
            TreeNode* current = s.top();
            s.pop();
           
            swap(current->left, current->right);
            if (current->right) s.push(current->right);
            if (current->left) s.push(current->left);
        }

        return root;

    }
};
