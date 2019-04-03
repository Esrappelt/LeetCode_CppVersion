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
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        search(root,k,ans);
        return ans;
    }
    void search(TreeNode *root,int &k,int &ans) {
        if(!root) return;
        search(root->left,k,ans);
        if(--k == 0) ans = root->val;
        search(root->right,k,ans);
    }
    
};

class Solution2 {
public:
    int ans = 0;
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> qu;
        TreeNode* tmp = root;
        while(!qu.empty() || tmp) {
            while(tmp) {
                qu.push(tmp);
                tmp = tmp->left;
            }
            if(!qu.empty()) {
                tmp = qu.top();qu.pop();
                if(--k == 0) ans = tmp->val;
                tmp = tmp->right;
            }
        } 
        return ans;
    }
};

int main() {
    Solution s;
    return 0;
}
