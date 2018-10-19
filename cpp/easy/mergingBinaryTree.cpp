// Merge Two Binary Trees

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* res = new TreeNode(0);
        if(t1!=NULL && t2!=NULL)
            res->val = t1->val+t2->val;
        
        else if(t1==NULL)
            res->val = t2->val;
        
        else
            res->val = t1->val;
        
        res->left = mergeTrees(t1->left, t2->left);
        
        res->right = mergeTrees(t1->right, t2->right);
        
        //TreeNode* null = new TreeNode(0);
        return res;
    }
};