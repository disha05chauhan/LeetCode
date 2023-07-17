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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*>s1,s2;
        vector<vector<int>>t;
        if(root==NULL)return t;
        s1.push(root);
        while(!s1.empty()|| !s2.empty()){
            vector<int>vec;
            if(!s1.empty()){
                while(!s1.empty()){
                    TreeNode*curr=s1.top();
                    vec.push_back(curr->val);
                    s1.pop();
                    if(curr->left!=NULL)s2.push(curr->left);
                    if(curr->right!=NULL)s2.push(curr->right);
                }
            }
            else{
                while(!s2.empty()){
                    TreeNode*curr=s2.top();
                    vec.push_back(curr->val);
                    s2.pop();
                     if(curr->right!=NULL)s1.push(curr->right);
                    if(curr->left!=NULL)s1.push(curr->left);
                    
            }
            
        }
            t.push_back(vec);
        }
        return t;
        
    }
};