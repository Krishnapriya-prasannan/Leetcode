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
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> result;
        stack <TreeNode*> s1,s2;
        if(root==nullptr){
            return result;
        }
        s1.push(root);
        while(!s1.empty()){
        TreeNode* current=s1.top();
        s1.pop();
        s2.push(current);
        
        if(current->left!=nullptr){
            s1.push(current->left);
        }
        if(current->right!=nullptr){
            s1.push(current->right);
        }
        }
        while(!s2.empty()){
            TreeNode* curr=s2.top();
            s2.pop();
            result.push_back(curr->val);
        }
        return result;
    }
};
