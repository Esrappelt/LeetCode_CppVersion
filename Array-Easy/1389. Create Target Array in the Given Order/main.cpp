#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for(int i = 0; i < nums.size(); i++) target.insert(target.begin() + index[i], nums[i]);
        return target;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {0,1,2,3,4}, index = {0,1,2,2,1};
    vector<int> target = S.createTargetArray(nums,index);
    for(auto it:target) cout << it << ' ';
    return 0;
}
