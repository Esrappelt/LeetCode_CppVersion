#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root || !root->left && !root->right) return true;
        if(!root->left || !root->right) return false;
        return dfs(root->left,root->right);
    }
    bool dfs(TreeNode* p,TreeNode* q) {
        if(!p && !q) return true;
        if(!p || !q) return false;
        if(p->val != q->val) return false;
        return dfs(p->left,q->right) && dfs(p->right,q->left); 
    }
};

int main() {
	Solution s;
	return 0;
}
