#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
		int len = nums.size(),l = 0,sum = 0,ans = INT_MAX;
		for(int i = 0; i < len; i++) {
			sum += nums[i];
			while(sum >= s) {
				 ans = min(ans,i - l + 1);
				 sum -= nums[l++];
			}
		}
		return ans;
    }
};


int main() {
	Solution s;
	vector<int> nums = {2,3,1,2,4,7,3};
	int ss = 7;
	int ans = s.minSubArrayLen(ss,nums);
	cout << ans;
	return 0;
}
