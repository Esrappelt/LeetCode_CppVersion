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
    bool isSameTree(TreeNode* p, TreeNode* q) {
       return dfs(p,q);
    }
    bool dfs(TreeNode* p, TreeNode* q) {
        if(p->val != q->val) return false;
        if(!p && !q) return true;
        if(!p || !q) return false;
        return dfs(p->left,q->left) && dfs(p->right,q->right);
    }
};


int main() {
	Solution s;
	return 0;
}
