#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0,r = nums.size() - 1;
        if(nums[r] >= nums[l]) return nums[0];
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] > nums[0]) l = mid + 1;
            else r = mid - 1;
        }
        return nums[l];
    }
};

int main() {
    Solution s;
    vector<int> weights = {1,2,3};
    int ans = s.findMin(weights);
    cout << ans << endl;
    return 0;
}