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
    int m_maxDiameter{0};

    int depth(TreeNode* node) {
        if (node == nullptr) return 0;

        int L = depth(node->left);
        int R = depth(node->right);

        m_maxDiameter = max(m_maxDiameter, L+R);

        return 1 + max(L,R);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return m_maxDiameter;
    }
};
