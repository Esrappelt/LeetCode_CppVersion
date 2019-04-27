#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0,one = 0,two = 0,k = 0;
		for(auto key : nums) key == 0 ? zero++ : key == 1 ? one++ : two++;
		while(zero--) nums[k++] = 0;
		while(one--) nums[k++] = 1;
		while(two--) nums[k++] = 2;
    }
};

int main() {
	Solution s;
	vector<int> nums = {1,2,0,0,1,2};
	s.sortColors(nums);
	for(auto key : nums) cout << key << endl;
	return 0;
}
