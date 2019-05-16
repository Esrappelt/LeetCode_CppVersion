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
    int ans = 0;
    int findBottomLeftValue(TreeNode* root) {
        bfs(root);
        return ans;
    }
    void bfs(TreeNode *root) {
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()) {
            TreeNode *tmp = qu.front();qu.pop();
            ans = tmp->val;
            if(tmp->right) qu.push(tmp->right);
            if(tmp->left) qu.push(tmp->left);
        }
    }
};

int main() {
	Solution s;
	return 0;
}
