#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<string> res;
    vector<string> generateParenthesis(int n) {
        dfs(n,"",0,0);
		return res;
    }
	void dfs(int n,string tmp,int open,int close) {
		if(tmp.size() == 2 * n) {
			res.emplace_back(tmp);
			return;
		}
		if(open < n) dfs(n,tmp + "(",open + 1,close);
		if(close < open) dfs(n,tmp + ")",open,close + 1);
	}
};
int main() {
	Solution s;
	vector<string> ans = s.generateParenthesis(3);
	for(auto it : ans) cout << it << endl;
	return 0;
}
