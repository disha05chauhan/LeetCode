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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>>t;
        if(root==NULL)return t;
        queue<TreeNode*>q;
        
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>vec;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                vec.push_back(curr->val);
                if(curr->left!=NULL)q.push(curr->left);
                if(curr->right!=NULL)q.push(curr->right);
            }
            t.push_back(vec);
            
        }
            reverse(t.begin(),t.end());
        return t;
    }
    
};