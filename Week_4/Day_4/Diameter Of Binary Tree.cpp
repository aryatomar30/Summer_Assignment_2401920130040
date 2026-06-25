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
public: // pair store (dia,height)
 pair<int,int> diameter(TreeNode *root){
    if(root==nullptr){
        return {0,0};
    }
    pair<int,int>lefth = diameter(root->left);
    pair<int,int>righth =diameter(root->right);
    int currdia= lefth.second+righth.second+1;
    int finaldia=max(currdia,max(lefth.first,righth.first));
    int finah=max(lefth.second,righth.second)+1;
    return {finaldia,finah};
 }
    int diameterOfBinaryTree(TreeNode* root) {
     pair<int,int>p= diameter(root);
     return p.first-1; /// note here the major problem occur becouse i have solve the question consider that the dia is caluate by node not ege so that ways 
    }
};
