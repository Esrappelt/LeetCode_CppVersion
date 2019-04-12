#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(!nums.size()) return vector<int> {-1,-1};
        int ans1 = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(ans1 == nums.size() || (ans1 < nums.size() && nums[ans1] != target)) return vector<int> {-1,-1};
        int ans2 = ans1 + 1;
        while(ans2 < nums.size() && nums[ans2] == target) ans2++;
        return vector<int> {ans1,ans2-1};
    }
};


int main() {
    Solution s;
    vector<int> arr = {},ans;
    int target = 0;
    ans = s.searchRange(arr,target);
    cout << ans[0] << ' ' << ans[1] << endl;
    return 0;
}