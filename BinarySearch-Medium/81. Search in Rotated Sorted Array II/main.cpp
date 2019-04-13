#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int pivot = findPivot(nums,target);
        cout << pivot << endl;
        int index1 = lower_bound(nums.begin(),nums.begin() + pivot,target) - nums.begin();
        int index2 = lower_bound(nums.begin() + pivot,nums.end(),target) - nums.begin();
        if(index1 != pivot && nums[index1] == target) return true;
        if(index2 != nums.size() && nums[index2] == target) return true;
        return false;
    }
    int findPivot(vector<int>& nums, int target) {
        int l = 0,r = nums.size() - 1,len = r;
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] < nums[len]) r = mid;
            else l = mid + 1;
        }
        while(l >= 1) {
            if(nums[l] < nums[l-1]) return l;
            l--;
        }
        return l;
    }
};
int main() {
    Solution s;
    vector<int> nums = {2,3,3,3,3,1,1,1,1};
    int target = 3;
    cout << s.search(nums,target);
    return 0;
}