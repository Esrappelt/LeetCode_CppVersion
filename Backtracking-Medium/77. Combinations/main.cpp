#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<int>>  res;
	vector<int> ans;
    vector<vector<int>> combine(int n, int k) {
		dfs(1,n,k);
        return res;
    }
	void dfs(int dep,int n,int k) {
		if(k <= 0) {
			for(auto it : ans) cout << it << ' ';
			cout << endl;
			res.emplace_back(ans);
			return;
		}
		for(int i = dep; i <= n - k + 1; i++) {
			ans.emplace_back(i);
			dfs(i+1,n,k-1);
			ans.pop_back();
		}
	}
};

int main() {
	Solution s;
	s.combine(4,3);
	return 0;
}
