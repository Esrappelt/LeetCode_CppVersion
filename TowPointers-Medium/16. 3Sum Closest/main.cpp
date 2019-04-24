#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
		int len = nums.size(),ans = nums[0] + nums[1] + nums[len-1];
		for(int i = 0; i < len; i++) {
			int l = i + 1,r = len - 1;
			while(l < r) {
				int sum = nums[i] + nums[l] + nums[r];
				if(abs(sum-target) < abs(ans-target)) ans = sum;
				if(sum == target) return target;
				sum < target ? l++ : r--;
			}
		}
		return ans;
    }
};



int main() {
	Solution s;
	vector<int> nums = {0,2,1,-3};
	int target = 1;
	int ans = s.threeSumClosest(nums,target);
	cout << ans << endl;
	return 0;
}
