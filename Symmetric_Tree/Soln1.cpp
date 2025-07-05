/**
Iterative Approach
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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        queue <TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        while(!q.empty()){
            TreeNode* t1=q.front();
            q.pop();
            TreeNode* t2=q.front();
            q.pop();
            if(t1==nullptr&&t2==nullptr){
                continue;
            }
            if(t1==nullptr||t2==nullptr||t1->val!=t2->val){
                return false;
            }
            q.push(t1->left);
            q.push(t2->right);
            q.push(t1->right);
            q.push(t2->left);

        }
        return true;
        
    }
};
