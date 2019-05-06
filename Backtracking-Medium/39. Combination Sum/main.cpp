#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> ans;
	vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int minv = *min_element(candidates.begin(),candidates.end());
		int n = target / minv + 1;
		dfs(candidates,0,n,target);
		return res;
    }
	void dfs(vector<int>& candidates,int dep,int n,int target) {
		if(n < 0 || target < 0) return;
		if(target == 0) {
			res.emplace_back(ans);
			return;
		}
		for(int i = dep; i < candidates.size(); i++) {
			ans.emplace_back(candidates[i]);
			dfs(candidates,i,n-1,target - candidates[i]);
			ans.pop_back();
		}
	}
};
int main() {
	Solution s;
	vector<int> candidates = {2};
	vector<vector<int>> res = s.combinationSum(candidates,100);
	for(auto it : res) {
		for(auto jt : it) cout << jt << ' ';
		cout << endl;
	}
	return 0;
}
