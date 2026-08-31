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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int maxDepth{0};
        stack<pair<TreeNode*, int>> s;

        s.push({root, 1});

        while(!s.empty()) {
            pair<TreeNode*, int> current = s.top();
            s.pop();
            
            TreeNode* node = current.first;
            int currDepth = current.second;

            if (node != nullptr) {
                maxDepth = max(maxDepth, currDepth);
                s.push({node->right, currDepth + 1});
                s.push({node->left, currDepth + 1});
            }
        }
        return maxDepth;
    }
};
