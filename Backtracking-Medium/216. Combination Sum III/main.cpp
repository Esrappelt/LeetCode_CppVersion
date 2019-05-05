#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<int>> res;
	vector<int> ans;
    vector<vector<int>> combinationSum3(int k, int n) {
		dfs(1,k,n);
		return res;
    }
	void dfs(int dep,int k,int n) {
		if(k <= 0) {
			if(n == 0) res.emplace_back(ans);
			return;
		}
		for(int i = dep; i <= 9; i++) {
			ans.emplace_back(i);
			dfs(i+1,k-1,n-i);	
			ans.pop_back();		
		}
	}
};


int main() {
	Solution s;
	s.combinationSum3(3,8);
	return 0;
}
