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
	int num = -1;
    vector<int> largestValues(TreeNode* root) {
		vector<int> ans(2000,INT_MIN),res;
		dfs(root,0,ans);
		for(int i = 0; i < num; i++) res.emplace_back(ans[i]);
		return res;
    }
	void dfs(TreeNode* root,int dep,vector<int> &ans) {
		if(!root) {
			num = max(num,dep);
			return;
		}
		ans[dep] = max(ans[dep],root->val);
		dfs(root->left,dep+1,ans);
		dfs(root->right,dep+1,ans);
	}
};


class Solution2 {
public:
    vector<int> largestValues(TreeNode* root) {
		if(!root) return {};
		vector<int> ans;
		queue<TreeNode*> qu;
		queue<int>level;
		level.push(0);
		qu.push(root);
		int m = -1;
		while(!qu.empty()) {
			TreeNode* r = qu.front();qu.pop();
			int l = level.front();level.pop();
			if(r->left) {
				qu.push(r->left);
				level.push(l+1);
			}
			if(r->right) {
				qu.push(r->right);
				level.push(l+1);
			}
			if(l > m) {
				m = l;
				ans.emplace_back(r->val);
			} else {
				ans[l] = max(ans[l],r->val);
			}
		}
		return ans;
    }
};




int main() {

	return 0;
}
