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
    TreeNode* constructTree(vector <int>& preorder,int pstart,int pend,vector<int>& inorder,int istart,int iend,map<int,int>& mp){
        if(pstart>pend||istart>iend){
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[pstart]);
        int ele=mp[root->val];
        int nele=ele-istart;
        root->left=constructTree(preorder,pstart+1,pstart+nele,inorder,istart,ele-1,mp);
        root->right=constructTree(preorder,pstart+nele+1,pend,inorder,ele+1,iend,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pstart=0,pend=preorder.size()-1;
        int istart=0,iend=inorder.size()-1;
        map <int,int> mp;
        for(int i=0;i<=iend;i++){
            mp[inorder[i]]=i;
        }
        return constructTree(preorder,pstart,pend,inorder,istart,iend,mp);
    }
};
