#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
	vector<vector<int>> ans;
	vector<int> tmp;
	bool vis[1000] = {0};
public:
    vector<vector<int>> permute(vector<int>& nums) {
        permutation2(0,nums);
		return ans;
    }
	void permutation(int dep,vector<int>& nums) {
		if(dep >= nums.size()) {
			for(auto key : tmp) cout << key << ',';
			cout << endl;;
			ans.emplace_back(tmp);
			return;
		}
		for(int i = 0; i < nums.size(); i++) {
			if(vis[i]) continue;
			vis[i] = 1;
			tmp.emplace_back(nums[i]);
			permutation(dep+1,nums);
			tmp.pop_back();
			vis[i] = 0;
		}
	}
	void permutation2(int dep,vector<int> &nums) {
		if(dep >= nums.size()) {
			for(auto key : nums) cout << key << ',';
			cout << endl;;
			ans.emplace_back(nums);
			return;
		}
		for(int i = dep; i < nums.size(); i++) {
			swap(nums[i],nums[dep]);
			permutation2(i+1,nums);
		}
	}
};



int main() {
	Solution s;
	vector<int> nums = {1,2,3,4};
	s.permute(nums);
	return 0;
}
