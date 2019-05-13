#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    int ans = 0;
    int maxDepth(Node* root) {
        if(!root) return 0;
        getmaxdepth(root,1);
    }
    void getmaxdepth(Node *root,int dep) {
        if(!root) return;
        ans = max(ans,dep);
        for(auto it : root->children) getmaxdepth(it,dep+1);
    }
};



int main() {
	Solution s;
	return 0;
}
