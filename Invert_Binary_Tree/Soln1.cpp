/**
Iterative BFS Approach
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
    TreeNode* invertTree(TreeNode* root) {
        queue <TreeNode*> q;
        TreeNode* res;
        TreeNode* temp;
        if (root==nullptr){
            return root;
        }
        q.push(root);
        while(!q.empty()){
            res=q.front();
            q.pop();
            temp=res->left;
            res->left=res->right;
            res->right=temp;
            if(res->left){
            q.push(res->left);
            }
            if(res->right){
            q.push(res->right);
            }


        }
        return root;
    }
};
