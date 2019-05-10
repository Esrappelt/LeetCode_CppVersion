#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
		vector<int> tmp;
    vector<vector<int>> subsets(vector<int>& nums) {
				vector<vector<int>> ans;
        dfs(0,nums,ans);
				return ans;
    }
		void dfs(int dep,vector<int>& nums,vector<vector<int>> &ans) {
			ans.emplace_back(tmp);
			for(int i = dep; i < nums.size(); i++) {
				tmp.emplace_back(nums[i]);
				dfs(i+1,nums,ans);
				tmp.pop_back();
			} 
		}
};


int main() {
	Solution s;
	vector<int> nums = {1,2,3};
	vector<vector<int>> ans = s.subsets(nums);
	for(auto it : ans) {
		for(auto jt : it) cout << jt << ' ';
		cout << endl;
	}
	return 0;
}
