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

    int traverse(struct TreeNode* temp){
        if(temp==nullptr) return 0;
        return 1+max(traverse(temp->right),traverse(temp->left));
    }

    int maxDepth(TreeNode* root) {
        
        int count=0;
        count  = traverse(root);
        return count;


    }
};
