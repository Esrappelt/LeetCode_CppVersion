#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int> tmp(101),t(101);
        for(int i = 0; i < nums.size(); i++) tmp[nums[i]]++;
        int k = 0;
        for(int i = 0; i < 101; i++){
            if(tmp[i]) {
                t[i] = k;
                k += tmp[i];
            }
        }
        for(int i = 0; i < nums.size(); i++) ans.push_back(t[nums[i]]);
        return ans;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {8,1,2,2,3};
    S.smallerNumbersThanCurrent(nums);
    return 0;
}
