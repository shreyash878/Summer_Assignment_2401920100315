class Codec {
public:
    // Serialize using preorder traversal
    void preorder(TreeNode* root, string &s) {
        if (!root) return;

        s += to_string(root->val) + " ";
        preorder(root->left, s);
        preorder(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s;
        preorder(root, s);
        return s;
    }

    // Deserialize
    TreeNode* build(vector<int>& pre, int &idx, int low, int high) {
        if (idx == pre.size())
            return nullptr;

        int val = pre[idx];

        if (val < low || val > high)
            return nullptr;

        TreeNode* root = new TreeNode(val);
        idx++;

        root->left = build(pre, idx, low, val);
        root->right = build(pre, idx, val, high);

        return root;
    }

    TreeNode* deserialize(string data) {
        if (data.empty())
            return nullptr;

        vector<int> pre;
        stringstream ss(data);
        int x;

        while (ss >> x)
            pre.push_back(x);

        int idx = 0;
        return build(pre, idx, INT_MIN, INT_MAX);
    }
};
