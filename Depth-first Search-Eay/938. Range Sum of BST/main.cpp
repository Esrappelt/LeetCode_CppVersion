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
    int rangeSumBST(TreeNode* root, int L, int R) {
        queue<TreeNode*> qu;
        int sum = 0;
        qu.push(root); 
        while(!qu.empty()) {
            TreeNode *t = qu.front();qu.pop();
            if(t->val >= L && t->val <= R) sum += t->val;
            if(t->left) qu.push(t->left);  
            if(t->right) qu.push(t->right);  
        }
        return sum;
    }
    int rangeSumBST2(TreeNode* root, int L, int R) {
        int sum = 0;
        dfs(sum,root,L,R);
        return sum;
    }
    void dfs(int &sum,TreeNode* root, int L, int R) {
        if(!root) return;
        if(root->val >= L && root->val <= R) sum += root->val;
        dfs(sum,root->left,L,R);
        dfs(sum,root->right,L,R);
    }
};

//Recursion version 



int main() {
	Solution s;
	return 0;
}
