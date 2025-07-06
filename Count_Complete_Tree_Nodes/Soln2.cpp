/**
iterative DFS Approach
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
    int countNodes(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        stack <TreeNode*> s;
        s.push(root);
        int sum=0;
        while(!s.empty()){
            TreeNode* node=s.top();
            s.pop();
            sum+=1;
            if(node->right){
                s.push(node->right);
            }
            if(node->left){
                s.push(node->left);
            }
        }
        return sum;
    }
};
