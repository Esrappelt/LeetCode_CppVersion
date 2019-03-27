#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int index = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
    return index == nums.size() ? -1 : nums[index] == target ? index : -1;
}

int main()
{

    return 0;
}
