#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
	vector<int> ans;
	vector<vector<int>> res;
	set<vector<int>> tmp;
	void dfs(int index,vector<int>& nums) {
		tmp.insert(ans);
		for(int i = index; i < nums.size(); i++) {
			ans.emplace_back(nums[i]);
			dfs(i+1,nums);
			ans.pop_back();
		}
	}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		sort(nums.begin(),nums.end());
        dfs(0,nums);
		for(auto it : tmp) res.emplace_back(it);
		return res; 
    }
};

int main() {
	Solution s;
	vector<int> nums = {4,4,4,1,4};
	vector<vector<int>> res = s.subsetsWithDup(nums);
	for(auto it : res) {
		for(auto jt : it) cout << jt <<' ';
		cout << endl;
	}
	return 0;
}
