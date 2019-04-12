class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        int l,r;
        l = lower_bound(nums.begin(),nums.begin() + pivot,target) - nums.begin();
        r = lower_bound(nums.begin()+pivot,nums.end(),target) - nums.begin();
        if(l != pivot && nums[l] == target) return l;
        else if(r != nums.size() && nums[r] == target) return r;
        else return -1;
    }
    int findPivot(vector<int> nums) {
        int l = 0,r = nums.size() - 1;
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] >= nums[0]) l = mid + 1;
            else r = mid; 
        }
        return l;
    }
};
