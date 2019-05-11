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


int main() {
	Solution s;
	vector<int> nums = {1,1,2}; 
	vector<vector<int>> res = s.permuteUnique(nums);
	for(auto it : res) {
		for(auto jt : it) cout << jt << ' ';
		cout << endl;
	}
	return 0;
}
