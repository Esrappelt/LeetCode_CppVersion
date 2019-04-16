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
		vector<int> arr;
    TreeNode* increasingBST(TreeNode* root) {	
			inorder(root);
			TreeNode *t = new TreeNode(0),*r = t;
			for(auto key : arr) {
				TreeNode *tmp = new TreeNode(key);
				r->right = tmp;
				r = tmp;
			}
			return t->right;
    }
		void inorder(TreeNode *root) {
			if(!root) return;
			inorder(root->left);
			arr.push_back(root->val);
			inorder(root->right);
		}
};

int main() {
	Solution s;
	return 0;
}
