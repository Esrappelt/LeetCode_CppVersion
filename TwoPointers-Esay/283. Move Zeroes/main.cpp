#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int k = 0,cur = 0; cur < nums.size(); cur++) if(nums[cur]) swap(nums[cur],nums[k++]);
    }
};
int main() {

	return 0;
}
