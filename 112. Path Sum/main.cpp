#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
bool hasPathSum(TreeNode* root,int sum) {
	if(root == NULL) return false;
	if(root->left == NULL && root->right == NULL) {
		if(sum == root->val) return true;
	}
	if(root->left) {
		if(hasPathSum(root->left,sum - root->val))
			return true;
	}
	if(root->right) {
		if(hasPathSum(root->right,sum - root->val))
			return true;
	}
	return false;
}
int main() {
	
	return 0;
} 
