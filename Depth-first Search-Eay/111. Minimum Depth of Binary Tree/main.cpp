#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int dfs(TreeNode* root) {
	if(!root) return 0;
	if(root->left == NULL && root->right == NULL) return 1;//若没有左子树和右子树，就返回1个节点 
	if(!root->left) return dfs(root->right) + 1;//若只有右子树，去右子树找 
	else if(!root->right) return dfs(root->left) + 1;//若只有左子树，去左子树找 
	else return min(dfs(root->left),dfs(root->right)) + 1;//都有，就进行新递归 
}
int minDepth(TreeNode* root) {
	return dfs(root);
}

int main() {
	return 0;
}
