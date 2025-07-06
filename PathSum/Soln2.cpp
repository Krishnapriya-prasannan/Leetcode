/**
Iterative DFS Approach
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return false;
        }
       stack <pair<TreeNode*,int>> s;
       s.push({root,root->val});
       while(!s.empty()){
        TreeNode* node=s.top().first;
        int sum=s.top().second;
        s.pop();

        if(!node->left && !node->right){
            if(sum==targetSum){
                return true;
            }
        }
        if(node->right){
            s.push({node->right,sum+node->right->val});
        }
        if(node->left){
            s.push({node->left,sum+node->left->val});
        }
       }
       return false;
    }
};
