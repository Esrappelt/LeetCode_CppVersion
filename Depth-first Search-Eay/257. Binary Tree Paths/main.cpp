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
    vector<vector<int>> ans;
    vector<int> res;
    vector<string> result;
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root);
        for(auto it : ans) {
            string t = "";
            for(int i = 0; i < it.size(); i++) {
                t += to_string(it[i]);
                if( i < it.size() - 1) t += "->";
            }
            result.emplace_back(t);
        }
        return result;
    }
    void dfs(TreeNode* root) {
        if(!root) return;
        res.emplace_back(root->val);
        if(!root->left && !root->right) ans.emplace_back(res);
        dfs(root->left);
        dfs(root->right);
        res.pop_back();
    }
};

int main() {
	Solution s;
	return 0;
}
