class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root); // initialy push root element
        bool stateLR= true; // flag to determine reverse the level
        while(!q.empty()){
            int n = q.size(); // size of current level
            vector<int> level;
            for(int i{};i<n;i++){ // traverse all ele of current level
                TreeNode* node = q.front();
                q.pop();
                if(node){ // push next level
                    level.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if(!stateLR) reverse(level.begin(),level.end()); // alternate revese each level
            stateLR = !stateLR;
            if(level.size()>0)ans.push_back(level);
        }
        return ans;
    }
};
