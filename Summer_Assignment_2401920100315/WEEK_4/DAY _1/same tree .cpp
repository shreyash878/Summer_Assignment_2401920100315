class Solution {
public:
    void preorder(TreeNode* root, vector<string>& ans){
        if(!root){
            ans.push_back("N"); // important for structure
            return;
        }
        ans.push_back(to_string(root->val));
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<string> a, b;

        preorder(p, a);
        preorder(q, b);

        return a == b;
    }
};
