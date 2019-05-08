#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<int>> res;
	vector<int> ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		sort(candidates.begin(),candidates.end());
		dfs(target,0,candidates);
		return res;
    }
	void dfs(int target,int dep,vector<int>& candidates) {
		if(target < 0) return;
		if(target == 0) {
			res.emplace_back(ans);
			return;
		}
		for(int i = dep; i < candidates.size(); i++) {
			if(i > dep && candidates[i] == candidates[i-1]) continue;
			ans.emplace_back(candidates[i]);
			dfs(target-candidates[i],i+1,candidates);
			ans.pop_back();
		}
	}
};

int main() {
	Solution s;
	vector<int> ans = {10,1,2,7,6,1,5};
	s.combinationSum2(ans,8);
	return 0;
}
