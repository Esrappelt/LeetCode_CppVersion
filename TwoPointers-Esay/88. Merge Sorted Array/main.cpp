#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> num;
		int p1 = 0,p2 = 0,r = 0;
		while(p1 < m && p2 < n) {
			if(nums1[p1] < nums2[p2]) num.emplace_back(nums1[p1++]);
			else if(nums1[p1] > nums2[p2])  num.emplace_back(nums2[p2++]);
			else {
				num.emplace_back(nums1[p1++]);
				num.emplace_back(nums2[p2++]);
			}
		} 
		while(p1 < m) num.emplace_back(nums1[p1++]);
		while(p2 < n) num.emplace_back(nums2[p2++]);
		while(r < num.size()) nums1[r] = num[r],r++; 
    }
};	


int main() {
	vector<int> nums1 = {1,2,3,0,0,0},nums2 = {2,5,6};
	Solution s;
	s.merge(nums1,3,nums2,3);
	for(auto key : nums1) cout << key << endl;
	return 0;
}
