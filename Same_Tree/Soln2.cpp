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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue <TreeNode*> q1,q2;
        q1.push(p);
        q2.push(q);
        TreeNode* n1,* n2;
        while(!q1.empty()&&!q2.empty()){
            n1=q1.front();
            q1.pop();
            n2=q2.front();
            q2.pop();
            if(!n1&&!n2){
                continue;
            }
            if(!n1||!n2||n1->val!=n2->val){
                return false;
            }
            q1.push(n1->left);
            q1.push(n1->right);
            q2.push(n2->left);
            q2.push(n2->right);
        }
        return true;

    }
};
