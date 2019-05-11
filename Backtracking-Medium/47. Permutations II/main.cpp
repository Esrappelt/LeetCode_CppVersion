#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
			set<vector<int>> ans;
			vector<vector<int>> res;
			sort(nums.begin(),nums.end());
					do{ans.insert(nums);}while(next_permutation(nums.begin(),nums.end()));
			for(auto it : ans) res.emplace_back(it); 
			return res;
    }
};


class Solution2 {
public:
		vector<vector<int>> res;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
			sort(nums.begin(),nums.end());
			permute(nums,0);
			return res;
    }
		void permute(vector<int> nums,int i) {
			if(i >= nums.size()) {
				res.emplace_back(nums);
				return;
			}
			for(int j = i; j < nums.size(); j++) {
				if(j == i || nums[i] != nums[j]) {
					swap(nums[i],nums[j]);
					permute(nums,i+1);
				}
			}
		}
};


int main() {
	Solution2 s;
	vector<int> nums = {1,1,2,2}; 
	vector<vector<int>> res = s.permuteUnique(nums);
	for(auto it : res) {
		for(auto jt : it) cout << jt << ' ';
		cout << endl;
	}
	return 0;
}
