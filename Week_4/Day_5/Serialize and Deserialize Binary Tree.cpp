/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
private:
    void serialmaker(TreeNode* root,string &ans){
        if(root==NULL){
            ans+="#,";
            return ;
        }
        ans+=to_string(root->val)+',';
        serialmaker(root->left,ans);
        serialmaker(root->right,ans);
    }
    TreeNode* deserialhelper(string &data,int &i){
        if(data[i]=='#'){
            i+=2;
            return NULL;
        }
        string temp="";
        while(i<data.size() && data[i]!=','){
            temp+=data[i];
            i++;
        }
        i++;
        int k = stoi(temp);
        TreeNode* root = new TreeNode(k);
        root->left=deserialhelper(data,i);
        root->right=deserialhelper(data,i);
        return root;
    }
public:
    string serialize(TreeNode* root) {
        string ans = "";
        serialmaker(root,ans);
        return ans;
    }
    TreeNode* deserialize(string data) {
        int index =0;
        return deserialhelper(data,index);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
