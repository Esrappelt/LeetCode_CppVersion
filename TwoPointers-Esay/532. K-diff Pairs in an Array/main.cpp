#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
		if(!nums.size() || k < 0) return 0;
        unordered_map<int,int> res;
		int ans = 0;
		for(auto key : nums) res[key]++;
		if(k) {
			for(auto it = res.begin(); it != res.end(); it++) {
				if(res.find(it->first + k) != res.end()) ans++;
			}
		}else {
			for(auto it = res.begin(); it != res.end(); it++) {
				if(it->second > 1) ans++;
			}
		}
		return ans;
    }
};



int main() {
	Solution s;
	vector<int> nums = {1,1,1,1,1};
	int k = 0;
	int ans = s.findPairs(nums,k);
	cout << ans;
	return 0;
}
