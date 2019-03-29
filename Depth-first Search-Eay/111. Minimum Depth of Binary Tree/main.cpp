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
	if(root->left == NULL && root->right == NULL) return 1;//��û�������������������ͷ���1���ڵ� 
	if(!root->left) return dfs(root->right) + 1;//��ֻ����������ȥ�������� 
	else if(!root->right) return dfs(root->left) + 1;//��ֻ����������ȥ�������� 
	else return min(dfs(root->left),dfs(root->right)) + 1;//���У��ͽ����µݹ� 
}
int minDepth(TreeNode* root) {
	return dfs(root);
}

int main() {
	return 0;
}
