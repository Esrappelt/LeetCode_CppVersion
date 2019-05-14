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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1,ans2;
        getValue(root1,ans1);
        getValue(root2,ans2);
        return ans1 == ans2;
    }
    void getValue(TreeNode* root,vector<int> &ans) {
        if(!root->left && !root->right) ans.emplace_back(root->val);
        if(root->left) getValue(root->left,ans);
        if(root->right) getValue(root->right,ans);
    }
};



int main() {
	Solution s;
	return 0;
}
