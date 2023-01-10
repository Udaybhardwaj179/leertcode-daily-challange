class Solution {
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if (p ==NULL && q==NULL) return true;
        if (p ==NULL || q==NULL)return false;
        if (p->val != q->val)return false;
        bool y=isSameTree(p->left,q->left);
        bool x=isSameTree(p->right,q->right);
        
        if (x&&y)return 1;
        return 0;
        
        
       
    }
};
