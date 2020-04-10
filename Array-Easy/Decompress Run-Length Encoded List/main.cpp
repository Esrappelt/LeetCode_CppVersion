#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> tmp;
        for(int i = 0; i < nums.size(); i += 2)
            while(nums[i]--) tmp.push_back(nums[i+1]);
        return tmp;
    }
};


int main()
{
    Solution s;
    vector<int> nums = {1,2,3,4};
    vector<int> res = s.decompressRLElist(nums);
    for(int i = 0; i < res.size(); i++) {
        printf("%d\n", res[i]);
    }
    return 0;
}
