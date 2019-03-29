#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int maxDepth(TreeNode* root) {
    if(!root) return 0;
    int maxdepth = 0;
    queue<TreeNode*> qu;
    qu.push(root);
    while(!qu.empty()) {
        for(int i = 0,n = qu.size(); i < n; i++) {
            TreeNode* tmp = qu.front();
            qu.pop();
            if(tmp->left) qu.push(tmp->left);
            if(tmp->right) qu.push(tmp->right);
        }
        maxdepth++;
    }
    return maxdepth;
}
int maxDepth2(TreeNode* root) {
    return root ? max(maxDepth(root->left)+1,maxDepth(root->right)+1) : 0;
}
int main()
{
    return 0;
}
